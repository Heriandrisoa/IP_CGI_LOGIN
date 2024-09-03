#include <stdio.h>
#include "ip_function.h"
#include <stdlib.h>
int main()
{
    printf("Content-type: text/html\n\n");
    char *data=NULL,user[MAX],password[MAX];
    char* len_data_tmp=getenv("CONTENT_LENGTH");
    int len_data;
    if(len_data_tmp==NULL)
    {
        printf("aucune donnee recuperee");
        exit(1);
    }

    len_data=atoi(len_data_tmp);
    data=(char*)malloc(len_data*sizeof(char));
    if(data==NULL)
    {
        printf("allocation echouee");
        exit(1);
    }

    if(fread(data,1,len_data,stdin)==0)
    {
        printf("Erreur : Impossible de lire les données POST\n");
        free(data);
        exit(1);
    }

     data[len_data] = '\0';
     getdata(user,password,data);
    //printf("<html><body>%s %s</body></html>",login,password);
    login(user,password);
     //login_failed(data);
    free(data);
    return 0;
}