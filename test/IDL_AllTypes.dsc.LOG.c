/* It had generated by DirectStruct v1.6.3 */
#include "IDL_AllTypes.dsc.h"

#ifndef FUNCNAME_DSCLOG_AllTypes
#define FUNCNAME_DSCLOG_AllTypes	DSCLOG_AllTypes
#endif

#ifndef PREFIX_DSCLOG_AllTypes
#define PREFIX_DSCLOG_AllTypes	printf( 
#endif

#ifndef NEWLINE_DSCLOG_AllTypes
#define NEWLINE_DSCLOG_AllTypes	"\n"
#endif

int FUNCNAME_DSCLOG_AllTypes( AllTypes *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_AllTypes "AllTypes.n1[%d]" NEWLINE_DSCLOG_AllTypes , pst->n1 );
	PREFIX_DSCLOG_AllTypes "AllTypes.n2[%hd]" NEWLINE_DSCLOG_AllTypes , pst->n2 );
	PREFIX_DSCLOG_AllTypes "AllTypes.n4[%d]" NEWLINE_DSCLOG_AllTypes , pst->n4 );
	PREFIX_DSCLOG_AllTypes "AllTypes.n8[" LONGLONG_FORMAT_SPEC "d]" NEWLINE_DSCLOG_AllTypes , pst->n8 );
	PREFIX_DSCLOG_AllTypes "AllTypes.u1[%u]" NEWLINE_DSCLOG_AllTypes , pst->u1 );
	PREFIX_DSCLOG_AllTypes "AllTypes.u2[%hu]" NEWLINE_DSCLOG_AllTypes , pst->u2 );
	PREFIX_DSCLOG_AllTypes "AllTypes.u4[%u]" NEWLINE_DSCLOG_AllTypes , pst->u4 );
	PREFIX_DSCLOG_AllTypes "AllTypes.u8[" LONGLONG_FORMAT_SPEC "u]" NEWLINE_DSCLOG_AllTypes , pst->u8 );
	PREFIX_DSCLOG_AllTypes "AllTypes.f4[%f]" NEWLINE_DSCLOG_AllTypes , pst->f4 );
	PREFIX_DSCLOG_AllTypes "AllTypes.f8[%lf]" NEWLINE_DSCLOG_AllTypes , pst->f8 );
	PREFIX_DSCLOG_AllTypes "AllTypes.ch[%c]" NEWLINE_DSCLOG_AllTypes , pst->ch );
	PREFIX_DSCLOG_AllTypes "AllTypes.uch[%c]" NEWLINE_DSCLOG_AllTypes , pst->uch );
	PREFIX_DSCLOG_AllTypes "AllTypes.str32[%s]" NEWLINE_DSCLOG_AllTypes , pst->str32 );
	PREFIX_DSCLOG_AllTypes "AllTypes.str1024[%s]" NEWLINE_DSCLOG_AllTypes , pst->str1024 );
	PREFIX_DSCLOG_AllTypes "AllTypes.b1[%c]" NEWLINE_DSCLOG_AllTypes , pst->b1 );
	return 0;
}
/* It had generated by DirectStruct v1.6.3 */
#include "IDL_AllTypes.dsc.h"

#ifndef FUNCNAME_DSCLOG_AllTypeee
#define FUNCNAME_DSCLOG_AllTypeee	DSCLOG_AllTypeee
#endif

#ifndef PREFIX_DSCLOG_AllTypeee
#define PREFIX_DSCLOG_AllTypeee	printf( 
#endif

#ifndef NEWLINE_DSCLOG_AllTypeee
#define NEWLINE_DSCLOG_AllTypeee	"\n"
#endif

int FUNCNAME_DSCLOG_AllTypeee( AllTypeee *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_AllTypeee "AllTypeee.nnn[%d]" NEWLINE_DSCLOG_AllTypeee , pst->nnn );
	return 0;
}
