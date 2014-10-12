/* It had generated by DirectStruct v1.1.2 */
#ifndef _H_userinfo_ESQL_
#define _H_userinfo_ESQL_

#include <ecpglib.h>
#include <ecpgerrno.h>
#include <sqlca.h>

#include "IDL_userinfo.dsc.h"

#ifndef SQLCODE
#define SQLCODE		sqlca.sqlcode
#define SQLSTATE	sqlca.sqlstate
#endif

#define SQLNOTFOUND	100


EXEC SQL BEGIN DECLARE SECTION ;
	extern int userinfo_user_id ;	extern short userinfo_user_id_id ;
	extern char userinfo_user_name[ 16 + 1 ] ;	extern short userinfo_user_name_id ;
	extern char userinfo_email[ 128 + 1 ] ;	extern short userinfo_email_id ;
EXEC SQL END DECLARE SECTION ;

#define	TFLIST_userinfo \
	user_id , \
	user_name , \
	email

#define	DBVLIST_userinfo \
	:userinfo_user_id , \
	:userinfo_user_name , \
	:userinfo_email

#define	DBVLLIST_userinfo \
	:userinfo_user_id :userinfo_user_id_id , \
	:userinfo_user_name :userinfo_user_name_id , \
	:userinfo_email :userinfo_email_id

void DSCINITV_userinfo();
void DSCVTOS_userinfo( userinfo *pst );
void DSCSTOV_userinfo( userinfo *pst );
void DSCTRIM_userinfo( userinfo *pst );

void DSCSQLACTION_SELECT_user_name_email_FROM_userinfo_WHERE_user_id_E( userinfo *pst );
void DSCSQLACTION_SELECT_A_FROM_userinfo_WHERE_user_id_E_AND_user_name_E( userinfo *pst );
void DSCSQLACTION_INSERT_INTO_userinfo( userinfo *pst );
void DSCSQLACTION_UPDATE_userinfo_SET_A_WHERE_user_id_E( userinfo *pst );
void DSCSQLACTION_UPDATE_userinfo_SET_email( userinfo *pst );
void DSCSQLACTION_DELETE_FROM_userinfo_WHERE_user_id_GE( userinfo *pst );
void DSCSQLACTION_DELETE_FROM_userinfo( userinfo *pst );
void DSCSQLACTION_OPEN_CURSOR_mycursor_SELECT_A_FROM_userinfo( userinfo *pst );
void DSCSQLACTION_FETCH_CURSOR_mycursor( userinfo *pst );
void DSCSQLACTION_CLOSE_CURSOR_mycursor();
void DSCSQLACTION_OPEN_CURSOR_mycursor1_SELECT_user_name_FROM_userinfo_WHERE_user_id_GE( userinfo *pst );
void DSCSQLACTION_FETCH_CURSOR_mycursor1( userinfo *pst );
void DSCSQLACTION_CLOSE_CURSOR_mycursor1();
void DSCSQLACTION_OPEN_CURSOR_mycursor2_SELECT_user_name_email_FROM_userinfo_ORDER_BY_user_id_ASC( userinfo *pst );
void DSCSQLACTION_FETCH_CURSOR_mycursor2( userinfo *pst );
void DSCSQLACTION_CLOSE_CURSOR_mycursor2();
void DSCSQLACTION_OPEN_CURSOR_mycursor3_SELECT_A_FROM_userinfo_WHERE_user_id_GE_ORDER_BY_user_id_ASC( userinfo *pst );
void DSCSQLACTION_FETCH_CURSOR_mycursor3( userinfo *pst );
void DSCSQLACTION_CLOSE_CURSOR_mycursor3();

#endif