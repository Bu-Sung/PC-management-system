
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[11];
};
static const struct sqlcxp sqlfpn =
{
    10,
    "PC_main.pc"
};


static unsigned int sqlctx = 79483;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[5];
   unsigned int   sqhstl[5];
            int   sqhsts[5];
            void  *sqindv[5];
            int   sqinds[5];
   unsigned int   sqharm[5];
   unsigned int   *sqharc[5];
   unsigned short  sqadto[5];
   unsigned short  sqtdso[5];
} sqlstm = {13,5};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,1,0,0,30,62,0,0,0,0,0,1,0,
20,0,0,0,0,0,27,71,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
51,0,0,3,0,0,17,161,0,0,1,1,0,1,0,1,97,0,0,
70,0,0,3,0,0,45,167,0,0,0,0,0,1,0,
85,0,0,3,0,0,13,173,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,
112,0,0,4,0,0,24,280,0,0,1,1,0,1,0,1,97,0,0,
131,0,0,5,0,0,29,282,0,0,0,0,0,1,0,
146,0,0,3,0,0,17,341,0,0,1,1,0,1,0,1,97,0,0,
165,0,0,3,0,0,45,345,0,0,0,0,0,1,0,
180,0,0,3,0,0,13,351,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,
215,0,0,3,0,0,15,365,0,0,0,0,0,1,0,
230,0,0,6,0,0,31,390,0,0,0,0,0,1,0,
};


// 마지막고침 : 2020.11.17
// win32 Visual C 2010 이상컴파일시 추가
// 프로그램 가장 첫 줄에 추가할 것
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
//-----------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include "header.h"

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>


// win32 Visual C 2010 이상컴파일시 추가
#define getch() _getch()
//-----------------------------------------

//#ifdef WIN32
#include < windows.h >
/*---------------  화면 커서 위치 제어 ----------------------*/
#include < windows.h >
void gotoxy(int x, int y) ;
void getxy(int *x, int *y) ;
void clrscr(void) ;
/*-----------------------------------------------------------*/
void print_screen(char fname[]);
void DB_connect();
void login();
void signUp();
void start();
int sql_error();

/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

	/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


#define getch() _getch()

//관리자 아이디
char adminID[10] = "*admin";
char adminPW[10] = "1234";
char adminNAME[10] = "admin";


/*---------------  main함수 --------------------*/

void main()
{
	_putenv("NLS_LANG=American_America.KO16KSC5601"); //한글사용
	DB_connect();

   	start();

	/* EXEC SQL COMMIT WORK RELEASE ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}
void DB_connect()
{
   strcpy((char *)uid.arr,"b20183150@//sedb.deu.ac.kr:1521/orcl");
   uid.len = (short) strlen((char *)uid.arr);
   strcpy((char *)pwd.arr,"20183150");
   pwd.len = (short) strlen((char *)pwd.arr);

   /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )10;
   sqlstm.offset = (unsigned int  )20;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&uid;
   sqlstm.sqhstl[0] = (unsigned int  )82;
   sqlstm.sqhsts[0] = (         int  )82;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&pwd;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )22;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlstm.sqlcmax = (unsigned int )100;
   sqlstm.sqlcmin = (unsigned int )2;
   sqlstm.sqlcincr = (unsigned int )1;
   sqlstm.sqlctimeout = (unsigned int )0;
   sqlstm.sqlcnowait = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	// connection이 실패했을경우의 처리부분

	if (sqlca.sqlcode != 0 && sqlca.sqlcode != -1405){ 
		printf("Connect error: %s", sqlca.sqlerrm.sqlerrmc);
		getch();
		exit(-1);
	}

    printf("Oracle Connect SUCCESS by %s\n", uid.arr);
}
/*---------------   프로그램 시작 함수 --------------------*/
void start(){
	char main_select[10];
	
	
	while(1){
		clrscr();
		print_screen("login_menu.txt");
		gotoxy(37,16);
		gets_s(main_select, sizeof main_select);
		if (main_select[0]=='\0'){
			gotoxy(25,18);
			printf("프로그램을 종료합니다.");
			getch();
			exit(1);
		}else{
		if(strcmp(main_select,"1") == 0){
			login();
		}else if (strcmp(main_select,"2") == 0){
			signUp();
		}else{
			gotoxy(37,16); //입력 창으로 가서 클리어 시키기
			printf("        ");
			gotoxy(25,18); // 잘 못 입력 되었다는 것을 알리기
			printf("잘 못된 입력입니다. 다시 입력해주세요");
			getch();
		}
		}
	}
}


/*---------------   로그인 함수 --------------------*/
void login(){
	
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar id[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } id;

   /* varchar pw[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pw;

   int using;

   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

	
	char id_temp[100];
	char pw_temp[100];	
	int co;
	int result=0;	

 	 /* Register sql_error() as the error handler. */
   	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	while(1){
		co=1;
		clrscr();
		print_screen("login.txt");
		gotoxy(32,11);
		gets_s(id_temp, sizeof id_temp);
		
		gotoxy(32,13);
		gets_s(pw_temp, sizeof pw_temp);
		
		if(id_temp[0]=='\0' && pw_temp[0]=='\0'){
			gotoxy(25,16);
			printf("메인화면으로 돌아갑니다.");
			getch();
			return;
		}else{
			if(strcmp(id_temp,adminID)==0){
				if(strcmp(pw_temp,adminPW)==0){
					empMain();
					break;
				}else{
					gotoxy(29,16);
					printf("비밀번호 오류 입니다.");
					getch();
				}	
			}else{
				sprintf(dynstmt,"SELECT gid, gpw, pc_using FROM gogak where gid='%s'",id_temp);
	
				/* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )51;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



			   	/* cursor 선언 */
   				/* EXEC SQL DECLARE c_cursor CURSOR FOR S ; */ 
 
		
 				 /* cursor open */
	   			/* EXEC SQL OPEN c_cursor ; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 4;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )70;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqcmod = (unsigned int )0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

			   	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

		
				for(;;){
					
					/* EXEC SQL FETCH c_cursor INTO :id, :pw, :using; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 4;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )85;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.sqlpfmem = (unsigned int  )0;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqfoff = (           int )0;
     sqlstm.sqfmod = (unsigned int )2;
     sqlstm.sqhstv[0] = (         void  *)&id;
     sqlstm.sqhstl[0] = (unsigned int  )102;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&pw;
     sqlstm.sqhstl[1] = (unsigned int  )102;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqhstv[2] = (         void  *)&using;
     sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
     sqlstm.sqhsts[2] = (         int  )0;
     sqlstm.sqindv[2] = (         void  *)0;
     sqlstm.sqinds[2] = (         int  )0;
     sqlstm.sqharm[2] = (unsigned int  )0;
     sqlstm.sqadto[2] = (unsigned short )0;
     sqlstm.sqtdso[2] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode == 1403) break;
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


					
			
					id.arr[id.len] = '\0' ;
					pw.arr[pw.len] = '\0';
					if(id.arr[0]=='\0'){
						co=0;
					}					
					if(strcmp(pw_temp,pw.arr)==0){
						gotoxy(28,16);
						printf("로그인에 성공하였습니다.");
						getch();
						if(using == 0){
							pc_start(id.arr);
							gogakMain(id.arr);
						}else{
							gogakMain(id.arr);
						}
						return;

					}else{
						gotoxy(29,16);
						printf("비밀번호 오류 입니다.");
				
						getch();
					}	
			
				}
				if(co==1){
					gotoxy(27,16);
					printf("아이디가 존재하지 않습니다.");
					getch();
				}
			}
			
		}
		
	}
}


/*---------------   회원가입 함수 --------------------*/

void signUp(){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

    		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	clrscr();
	print_screen("signUp.txt");
	
	char id[100]; // 고객 아이디
	char pw[100]; //고객 비밀번호
	char name[100]; //고객 이름
	char phone[20]; //고객 전화번호
	
	
 	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	
	while(1){
		gotoxy(35,9);
		gets_s(id,sizeof id);

		gotoxy(35, 11);
		gets_s(pw,sizeof pw);

		gotoxy(35,13);
		gets_s(name,sizeof name);

		gotoxy(35,15);
		gets_s(phone,sizeof phone);
		
		if(id[0]=='*'){
			gotoxy(22,22);
			printf("*는 첫번째 자리에 사용이 불가합니다.");           
			getch();
			gotoxy(22,22);
			printf("                                ");
		}else if(id[0] =='\0' ||pw[0]=='\0'||name[0]=='\0'||phone[0]=='\0' ){
			gotoxy(25,22);
			printf("작성하지 않은 항목이 존재합니다.");
			getch();
			gotoxy(25,22);
			printf("                                ");
		}else{
			break;
		}
		gotoxy(35,9);
		for(int i=0; i<4; i++){
			printf("                   \n\n");
		}
	}
	
		
	
	
	while(1){
		gotoxy(27,19);
		printf("확정하시겠습니까?(y/n)>>");
	
		char a[10]; // 확정할껀지 받는 변수
		gets_s(a,sizeof a);
		if(strcmp(a,"y")==0 || strcmp(a,"Y")==0 	){
			sprintf(dynstmt,"insert into gogak values ( '%s', '%s', '%s', '%s', default)" , id, name, pw, phone);
	
	  		 /* 실행시킬 SQL 문장*/
			/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )112;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) break;
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



			/* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )131;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


			gotoxy(25,22);
			printf("회원가입이 완료되었습니다.");
			break;
		}else if(strcmp(a,"n")==0 || strcmp(a,"N")==0){
			gotoxy(25,22);
			printf("회원가입을 취소하였습니다.");
			break;
		}else{		
			gotoxy(22,22); // 잘 못 입력 되었다는 것을 알리기
			printf("잘 못된 입력입니다. 다시 입력해주세요");
			gotoxy(31,21);
			printf("                ");
		}
	}
	getch();
		
}

void print_screen(char fname[])
{
	FILE *fp;
	char line[100];


	if ( (fp = fopen(fname,"r"))  == NULL ){
		printf("file open error\n");
		getch();
		exit(-1);
	}
	while(1)
	{
		if( fgets(line, 99, fp) == NULL){
		     break;
		}
		printf("%s", line);
	}

	fclose(fp);
}
/*---------------   회원 정보 찾기 함수 --------------------*/
int Select_tuple(char *no)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar  v_id[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_id;

    /* varchar  v_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_name;

    /* varchar  v_pw[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_pw;

    /* varchar v_phone[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_phone;

    int v_using;

    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    
    //EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
   
    sprintf(dynstmt,"SELECT gid, gpw, gname, phone,pc_using  FROM gogak where gid = '%s'", no) ;
	

    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )146;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    /* EXEC SQL DECLARE c_cursor CURSOR FOR S ; */ 
 

    /* EXEC SQL OPEN c_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )165;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 

    for(;;)
    {
        /* EXEC SQL FETCH c_cursor INTO :v_id, :v_pw, :v_name, :v_phone, :v_using ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )180;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_id;
        sqlstm.sqhstl[0] = (unsigned int  )22;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_pw;
        sqlstm.sqhstl[1] = (unsigned int  )22;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_name;
        sqlstm.sqhstl[2] = (unsigned int  )22;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_phone;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_using;
        sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    v_id.arr[v_id.len] = '\0';
	    v_pw.arr[v_pw.len] = '\0';
	    v_name.arr[v_name.len] = '\0';
	    v_phone.arr[v_phone.len] = '\0';
	    strcpy(gogakID, v_id.arr);
	    strcpy(gogakPW, v_pw.arr);
	    strcpy(gogakNAME, v_name.arr);
             	    strcpy(gogakPHONE, v_phone.arr);
      	    gogakUSING = v_using;
	return 1;
    }
return 0;	
    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )215;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   

}

/* --------------------------------------------------------------------------
int sql_error()

   errrpt prints the ORACLE error msg and number.
-------------------------------------------------------------------------- */
int sql_error(char *msg)
{
    char err_msg[128];
    size_t buf_len, msg_len;
	
    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

	  buf_len = sizeof (err_msg);
		    sqlglm(err_msg, &buf_len, &msg_len);
	if(strstr(err_msg,"ORA-20003") != NULL){
		return 1; //재고 없음
	}else{  
		    printf("%.*s\n", msg_len, err_msg);
	}
    getch();
   return 0;
    /* EXEC SQL ROLLBACK WORK; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )230;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    //exit(EXIT_FAILURE);
}
/*---------------  화면 커서 제어 함수 --------------------*/
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y)
{
    COORD Cur= {(SHORT)x, (SHORT) y};

    SetConsoleCursorPosition(STD_HANDLE, Cur);
}

void getxy(int *x, int *y)
{
    CONSOLE_SCREEN_BUFFER_INFO Buf ;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Buf);
    *x = (int)Buf.dwCursorPosition.X ;
    *y = (int)Buf.dwCursorPosition.Y ;
 
}

void clrscr(void)
{
    COORD Cur= {0, 0};
    unsigned long dwLen;

    FillConsoleOutputCharacter(STD_HANDLE, ' ', 80*40, Cur, &dwLen);
    gotoxy(0,1);
}

/*---------------------------------------------------------*/
/*---------------  Enter 입력시 종료 --------------------*/
void getE(){
	char c;
	while(1){
		if (_kbhit()) {       
           			c = getch();
			if( c==13)
				return;  
		}
	}
}
