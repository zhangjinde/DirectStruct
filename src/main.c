#include "dsc.h"

/*
 * dsc - DirectSrtuct compiler
 * author	: calvin
 * email	: calvinwilliams.c@gmail.com
 *
 * Licensed under the LGPL v2.1, see the file LICENSE in base directory.
 */

static void version()
{
	printf( "dsc v%s - DirectSrtuct Compiler\n" , DIRECTSTRUCT_VERSION );
	printf( "Copyright by calvin<calvinwilliams.c@gmail.com> 2014\n" );
}

static void usage()
{
	printf( "USAGE : dsc -f .dsc [ -c ] [ -c-LOG ]\n" );
	printf( "                    [ -c-order ]\n" );
	printf( "                    [ -c-compact ] [ -c-compress ]\n" );
	printf( "                    [ -c-xml ]\n" );
	printf( "                    [ -c-json ]\n" );
	printf( "                    [ -sql-pqsql ] [ -c-pqsql ]\n" );
	printf( "                    [ -c-ALL ]\n" );
}

int main( int argc , char *argv[] )
{
	int			c ;
	struct CommandParameter	cp ;
	
	if( argc == 1 )
	{
		version();
		usage();
		exit(0);
	}
	
	memset( & cp , 0x00 , sizeof(struct CommandParameter) );
	for( c = 1 ; c < argc ; c++ )
	{
		if( strcmp( argv[c] , "-v" ) == 0 )
		{
			version();
			return 0;
		}
		else if( strcmp( argv[c] , "-f" ) == 0 && c + 1 < argc )
		{
			c++;
			cp.pathfilename = argv[c] ;
		}
		else if( strcmp( argv[c] , "-c" ) == 0 )
		{
			cp.output_c_flag = 1 ;
		}
		else if( strcmp( argv[c] , "-c-order" ) == 0 )
		{
			cp.output_c_flag = 1 ;
			cp.output_c_order_flag = 1 ;
		}
		else if( strcmp( argv[c] , "-c-compact" ) == 0 )
		{
			cp.output_c_flag = 1 ;
			cp.output_c_order_flag = 1 ;
			cp.output_c_compact_flag = 1 ;
		}
		else if( strcmp( argv[c] , "-c-compress" ) == 0 )
		{
			cp.output_c_flag = 1 ;
			cp.output_c_order_flag = 1 ;
			cp.output_c_compress_flag = 1 ;
		}
		else if( strcmp( argv[c] , "-c-xml" ) == 0 )
		{
			cp.output_c_flag = 1 ;
			cp.output_c_xml_flag = 1 ;
		}
		else if( strcmp( argv[c] , "-c-json" ) == 0 )
		{
			cp.output_c_flag = 1 ;
			cp.output_c_json_flag = 1 ;
		}
		else if( strcmp( argv[c] , "-c-LOG" ) == 0 )
		{
			cp.output_c_flag = 1 ;
			cp.output_c_LOG_flag = 1 ;
		}
		else if( strcmp( argv[c] , "-sql" ) == 0 )
		{
			cp.output_sql_flag = 1 ;
		}
		else if( strcmp( argv[c] , "-ec-pqsql" ) == 0 )
		{
			cp.output_c_flag = 1 ;
			cp.output_ec_pqsql_flag = 1 ;
		}
		else if( strcmp( argv[c] , "-c-ALL" ) == 0 )
		{
			cp.output_c_flag = 1 ;
			cp.output_c_order_flag = 1 ;
			cp.output_c_compact_flag = 1 ;
			cp.output_c_compress_flag = 1 ;
			cp.output_c_xml_flag = 1 ;
			cp.output_c_LOG_flag = 1 ;
		}
		else
		{
			usage();
			exit(7);
		}
	}
	
	if( cp.pathfilename == NULL )
	{
		usage();
		exit(7);
	}
	
	return -dsc( & cp ) ;
}
