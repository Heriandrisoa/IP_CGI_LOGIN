#ifndef __HEAD__
#define __HEAD__
#include <stdio.h>

#define MAX 1000
#define MAX 1000

/*----html section*/
void style_success();
void user_successfully_added(char* login);
void user_already_in(char* login);
void style_error();
void ip_section(char* login);
void login_failed(char* login);
void password_failed(char* password);
/*---------------*/

/*ireo ilaina fona*/
void getdata(char* login,char* password,char* data);
int login_pattern(char* login);
int password_pattern(char* password);
int compare(char* A,char* B);
/*---------------*/

/*---------------*/
void login(char* logged,char* password);
int check_password(char* user,char* password);
/*---------------*/

void adduser(char* user,char* password);
int is_already_in(char* user);
void change_password(char* user);
void deconnect();

int getip();
int valid(char* A);
void meo();

#endif