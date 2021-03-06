/* It had generated by DirectStruct v1.6.3 */
#ifndef _H_BankXmlTransaction_
#define _H_BankXmlTransaction_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if ( defined __unix ) || ( defined __linux__ )
#ifndef _WINDLL_FUNC
#define _WINDLL_FUNC
#endif
#elif ( defined _WIN32 )
#ifndef _WINDLL_FUNC
#define _WINDLL_FUNC		_declspec(dllexport)
#endif
#endif

#ifndef DSCTRUE
#define DSCTRUE	(unsigned char)'t'
#endif
#ifndef DSCFALSE
#define DSCFALSE	(unsigned char)'f'
#endif
#ifndef DSCNULL
#define DSCNULL	(unsigned char)127
#endif

#if ( defined __unix ) | ( defined __linux__ )
#include <arpa/inet.h>
#define SNPRINTF		snprintf
#elif ( defined _WIN32 )
#define SNPRINTF		_snprintf
#include "winsock.h"
#endif

#if ( defined __unix ) | ( defined __linux__ )
#ifndef longlong
#define longlong	long long
#define ulonglong	unsigned long long
#define LL(_ll_)	_ll_##LL
#define ULL(_ll_)	_ll_##ULL
#define LONGLONG_FORMAT_SPEC	"%lld"
#define ATOLL	atoll
#endif
#if ( defined _AIX )
#define __BIG_ENDIAN	BIG_ENDIAN
#define __LITTLE_ENDIAN	LITTLE_ENDIAN
#define __BYTE_ORDER	BYTE_ORDER
#endif
#elif ( defined _WIN32 )
#ifndef longlong
#define longlong	__int64
#define ulonglong	unsigned __int64
#define LL(_ll_)	_ll_
#define ULL(_ll_)	_ll_
#define LONGLONG_FORMAT_SPEC	"%I64"
#define ATOLL	_atoi64
#define __BIG_ENDIAN	4321
#define __LITTLE_ENDIAN	1234
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif
#endif

#ifndef NATOC
#define NATOC(_base_,_len_,_result_)	{char buf[3+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,3);_result_=(char)atoi(buf);}
#endif
#ifndef NATOS
#define NATOS(_base_,_len_,_result_)	{char buf[5+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,5);_result_=(short)atol(buf);}
#endif
#ifndef NATOI
#define NATOI(_base_,_len_,_result_)	{char buf[10+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,10);_result_=atoi(buf);}
#endif
#ifndef NATOLL
#define NATOLL(_base_,_len_,_result_)	{char buf[20+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,20);_result_=ATOLL(buf);}
#endif
#ifndef NATOF
#define NATOF(_base_,_len_,_result_)	{char buf[20+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,20);_result_=(float)atof(buf);}
#endif
#ifndef NATOLF
#define NATOLF(_base_,_len_,_result_)	{char buf[60+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,60);_result_=atof(buf);}
#endif
#ifndef NATOB
#define NATOB(_base_,_len_,_result_)	{if(memcmp(_base_,"true",4)==0)_result_=DSCTRUE;else _result_=DSCFALSE;}
#endif

typedef struct
{
	char	version ;
	#define RESPONSE_CODE_PASSWORD_NOTMATCH	-12345
	struct
	{
		char	transaction_code[ 32 + 1 ] ;
		int	trans_jnlsno ;
		int	response_code ;
		char	response_desc[ 1024 + 1 ] ;
	} ResponseHeader ;
	struct
	{
		struct
		{
			struct
			{
				char	message_text[ 64 + 1 ] ;
			} AddonMessage [ 3 ] ;
			int	_AddonMessage_count ;
			int	_AddonMessage_size ;
		} AddonMessages ;
		struct
		{
			char	title_text[ 64 + 1 ] ;
			short	page_no ;
			short	page_size ;
		} TransactionDetailTitle ;
		struct
		{
			struct
			{
				char	trans_date[ 10 + 1 ] ;
				char	trans_time[ 10 + 1 ] ;
				char	outlet_id[ 6 + 1 ] ;
				char	card_no[ 20 + 1 ] ;
				float	trans_amount ;
			} TransactionDetail [ 10 ] ;
			int	_TransactionDetail_count ;
			int	_TransactionDetail_size ;
		} TransactionDetails ;
	} QueryTransactionDetails ;
} BankXmlTransaction ;

_WINDLL_FUNC int DSCINIT_BankXmlTransaction( BankXmlTransaction *pst );

_WINDLL_FUNC int DSCSERIALIZE_XML_BankXmlTransaction( BankXmlTransaction *pst , char *encoding , char *buf , int *p_len );
_WINDLL_FUNC int DSCDESERIALIZE_XML_BankXmlTransaction( char *encoding , char *buf , int *p_len , BankXmlTransaction *pst );

_WINDLL_FUNC int DSCSERIALIZE_XML_COMPACT_BankXmlTransaction( BankXmlTransaction *pst , char *encoding , char *buf , int *p_len );
_WINDLL_FUNC int DSCDESERIALIZE_XML_COMPACT_BankXmlTransaction( char *encoding , char *buf , int *p_len , BankXmlTransaction *pst );

#endif
