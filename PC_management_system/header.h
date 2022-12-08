#pragma once


void gogakMain(char str_id[20]);
void empMain();
void start();
void gotoxy(int x, int y);
void print_screen(char fname[]);
void DB_connect();
void login();
void signUp();
void start();
int sql_error();
void gogakUpdate();
void pc_start(char str_id[20]);
void clrscr(void);
void pc_start();
#define SEAT 10 //PC ÁÂ¼® ¼ö
int Select_tuple(char* no);
void getE();
char gogakID[20];
char gogakNAME[10];
char gogakPW[20];
char gogakPHONE[20];
int gogakUSING;