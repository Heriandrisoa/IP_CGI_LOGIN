#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ip_function.h"


void user_successfully_added(char* login)
{
	
printf("<!DOCTYPE html>\n");
    printf("<html lang=\"en\">\n");
    printf("<head>\n");
    printf("    <meta charset=\"UTF-8\">\n");
    printf("    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
    printf("    <title>ajout de l'utilisateur reussi</title>\n");
	style_success();
    printf("</head>\n");
    printf("<body>\n");
    printf("    <div class=\"container\">\n");
    printf("        <h1>utilisateur ajoutee</h1>\n");
    printf("        <p>l'utilisateur %s a ete ajoutee avec succes.</p>\n",login);
    printf("        <a href=\"menu.html\" class=\"btn\">Retourner au menu</a>\n");
    printf("    </div>\n");
    printf("</body>\n");
    printf("</html>\n");
}
void user_already_in(char* login)
{

printf("<!DOCTYPE html>\n");
    printf("<html lang=\"en\">\n");
    printf("<head>\n");
    printf("    <meta charset=\"UTF-8\">\n");
    printf("    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
    printf("    <title>ajout de l'utilisateur impossible</title>\n");
	style_error();
    printf("</head>\n");
    printf("<body>\n");
    printf("    <div class=\"container\">\n");
    printf("        <h1>Login Incorrect</h1>\n");
    printf("        <p>l'utilisateur %s existe deja.</p>\n",login);
    printf("        <a href=\"creer_un_compte.html\" class=\"btn\">Retourner au menu</a>\n");
    printf("    </div>\n");
    printf("</body>\n");
    printf("</html>\n");
}

void ip_section(char* login)
{    printf("<!DOCTYPE html>\n");
    printf("<html lang=\"en\">\n");
    printf("<head>\n");
    printf("    <meta charset=\"UTF-8\">\n");
    printf("    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
    printf("    <title>IP Address Management</title>\n");
    printf("    <style>\n");
    printf("        body {\n");
    printf("            font-family: 'Arial', sans-serif;\n");
    printf("            background-color: #34495E;\n");
    printf("            color: #ECF0F1;\n");
    printf("            margin: 0;\n");
    printf("            padding: 0;\n");
    printf("            display: flex;\n");
    printf("            justify-content: center;\n");
    printf("            align-items: center;\n");
    printf("            height: 100vh;\n");
    printf("        }\n");
    printf("        .container {\n");
    printf("            background-color: #2C3E50;\n");
    printf("            padding: 20px;\n");
    printf("            border-radius: 8px;\n");
    printf("            width: 350px;\n");
    printf("            box-shadow: 0px 0px 15px rgba(0, 0, 0, 0.5);\n");
    printf("            display: flex;\n");
    printf("            flex-direction: column;\n");
    printf("            align-items: center;\n");
    printf("        }\n");
    printf("        .header {\n");
    printf("            width: 100%%;\n");
    printf("            background-color: none;\n");
    printf("            color: #ECF0F1;\n");
    printf("            padding: 15px;\n");
    printf("            border-radius: 8px 8px 0 0;\n");
    printf("            text-align: center;\n");
    printf("            margin-bottom: 20px;\n");
    printf("        }\n");
    printf("        h1 {\n");
    printf("            margin: 0;\n");
    printf("            font-size: 20px;\n");
    printf("            animation: fadeIn 1s ease-in;\n");
    printf("        }\n");
    printf("        .input-group {\n");
    printf("            margin-bottom: 15px;\n");
    printf("            position: relative;\n");
    printf("            width: 100%%;\n");
    printf("        }\n");
    printf("        input[type=\"text\"] {\n");
    printf("            width: 100%%;\n");
    printf("            padding: 10px;\n");
    printf("            background-color: #34495E;\n");
    printf("            border: 1px solid #7F8C8D;\n");
    printf("            border-radius: 5px;\n");
    printf("            color: #ECF0F1;\n");
    printf("            transition: border-color 0.3s;\n");
    printf("        }\n");
    printf("        input:focus {\n");
    printf("            border-color: #1ABC9C;\n");
    printf("            outline: none;\n");
    printf("        }\n");
    printf("        label {\n");
    printf("            position: absolute;\n");
    printf("            left: 10px;\n");
    printf("            top: 10px;\n");
    printf("            padding: 0 5px;\n");
    printf("            transition: 0.3s;\n");
    printf("            pointer-events: none;\n");
    printf("            color: #7F8C8D;\n");
    printf("        }\n");
    printf("        input:focus + label,\n");
    printf("        input:valid + label {\n");
    printf("            top: -12px;\n");
    printf("            left: 8px;\n");
    printf("            color: #1ABC9C;\n");
    printf("            font-size: 12px;\n");
    printf("        }\n");
    printf("        .button {\n");
    printf("            width: 100%%;\n");
    printf("            padding: 10px;\n");
    printf("            background-color: #1ABC9C;\n");
    printf("            border: none;\n");
    printf("            border-radius: 5px;\n");
    printf("            color: white;\n");
    printf("            font-size: 16px;\n");
    printf("            cursor: pointer;\n");
    printf("            transition: background-color 0.3s, transform 0.3s;\n");
    printf("        }\n");
    printf("        .button:hover {\n");
    printf("            background-color: #16A085;\n");
    printf("            transform: scale(1.05);\n");
    printf("        }\n");
    printf("        .profile-links {\n");
    printf("            margin-top: 30px;\n");
    printf("            text-align: center;\n");
    printf("            width: 100%%;\n");
    printf("            position: absolute;\n");
    printf("            bottom: 20px;\n");
    printf("        }\n");
    printf("        .profile-links h2 {\n");
    printf("            margin-bottom: 10px;\n");
    printf("            font-size: 18px;\n");
    printf("            color: #ECF0F1;\n");
    printf("        }\n");
    printf("        .profile-links a {\n");
    printf("            color: #1ABC9C;\n");
    printf("            text-decoration: none;\n");
    printf("            font-size: 14px;\n");
    printf("            display: block;\n");
    printf("            margin: 5px 0;\n");
    printf("            transition: color 0.3s;\n");
    printf("        }\n");
    printf("        .profile-links a:hover {\n");
    printf("            color: #16A085;\n");
    printf("        }\n");
    printf("        @keyframes fadeIn {\n");
    printf("            from {\n");
    printf("                opacity: 0;\n");
    printf("            }\n");
    printf("            to {\n");
    printf("                opacity: 1;\n");
    printf("            }\n");
    printf("        }\n");
    printf("    </style>\n");
    printf("</head>\n");
    printf("<body>\n");
    printf("    <div class=\"container\">\n");
    printf("        <div class=\"header\">\n");
    printf("            <h1>bienvenue %s</h1>\n",login);
    printf("        </div>\n");
    printf("        <form action=\"process_ip.cgi\" method=\"post\">\n");
    printf("            <div class=\"input-group\">\n");
    printf("                <input type=\"text\" name=\"ip_address\" id=\"ip_address\" required>\n");
    printf("                <label for=\"ip_address\">Enter IP Address</label>\n");
    printf("            </div>\n");
    printf("            <button type=\"submit\" class=\"button\">Submit</button>\n");
    printf("        </form>\n");
    printf("    </div>\n");
    printf("    <div class=\"profile-links\">\n");
    printf("        <h2>Profile</h2>\n");
    printf("        <a href=\"change_name.html\">Modify Name</a>\n");
    printf("        <a href=\"change_password.html\">Modify Password</a>\n");
    printf("        <a href=\"confirmer_deconnection.html\">deconnection</a>\n");
    printf("    </div>\n");
    printf("</body>\n");
    printf("</html>\n");
}


void getdata(char* login,char* password,char* data)
{
	int i=0,j=0;
	char *buffer,*password_buffer,*login_buffer;
	while(data[i]!='&')
	{
		login[i]=data[i];
		i++;
	}
	login[i]='\0';
	buffer=strtok(login,"=");
	buffer=strtok(NULL,"=");
	strcpy(login,buffer);
	i++;
	while(data[i]!='&')
	{
		password[j]=data[i];
		i++;
		j++;
	}
	password[j]='\0';
	buffer=strtok(password,"=");
	buffer=strtok(NULL,"=");
	strcpy(password,buffer);
}

void style_success()
{
	
	printf("    <style>\n");
    printf("        body {\n");
    printf("            background-color: #1a1a1a;\n");
    printf("            font-family: Arial, sans-serif;\n");
    printf("            color: #f0f0f0;\n");
    printf("            display: flex;\n");
    printf("            justify-content: center;\n");
    printf("            align-items: center;\n");
    printf("            height: 100vh;\n");
    printf("            margin: 0;\n");
    printf("        }\n");
    printf("\n");
    printf("        .container {\n");
    printf("            background-color: #333;\n");
    printf("            padding: 20px 40px;\n");
    printf("            border-radius: 8px;\n");
    printf("            box-shadow: 0 0 15px rgba(0, 0, 0, 0.5);\n");
    printf("            text-align: center;\n");
    printf("        }\n");
    printf("\n");
    printf("        h1 {\n");
    printf("            color: #42d815;\n");
    printf("            margin-bottom: 20px;\n");
    printf("        }\n");
    printf("\n");
    printf("        p {\n");
    printf("            margin-bottom: 30px;\n");
    printf("        }\n");
    printf("\n");
    printf("        .btn {\n");
    printf("            display: inline-block;\n");
    printf("            padding: 10px 20px;\n");
    printf("            font-size: 16px;\n");
    printf("            color: ;\n");
    printf("            background-color:#42d815;\n");
    printf("            text-decoration: none;\n");
    printf("            border-radius: 4px;\n");
    printf("            transition: background-color 0.3s ease;\n");
    printf("        }\n");
    printf("\n");
    printf("        .btn:hover {\n");
    printf("            background-color: #3cff00;\n");
    printf("        }\n");
    printf("    </style>\n");
}

void style_error()
{
	printf("    <style>\n");
    printf("        body {\n");
    printf("            background-color: #1a1a1a;\n");
    printf("            font-family: Arial, sans-serif;\n");
    printf("            color: #f0f0f0;\n");
    printf("            display: flex;\n");
    printf("            justify-content: center;\n");
    printf("            align-items: center;\n");
    printf("            height: 100vh;\n");
    printf("            margin: 0;\n");
    printf("        }\n");
    printf("\n");
    printf("        .container {\n");
    printf("            background-color: #333;\n");
    printf("            padding: 20px 40px;\n");
    printf("            border-radius: 8px;\n");
    printf("            box-shadow: 0 0 15px rgba(0, 0, 0, 0.5);\n");
    printf("            text-align: center;\n");
    printf("        }\n");
    printf("\n");
    printf("        h1 {\n");
    printf("            color: #ff4c4c;\n");
    printf("            margin-bottom: 20px;\n");
    printf("        }\n");
    printf("\n");
    printf("        p {\n");
    printf("            margin-bottom: 30px;\n");
    printf("        }\n");
    printf("\n");
    printf("        .btn {\n");
    printf("            display: inline-block;\n");
    printf("            padding: 10px 20px;\n");
    printf("            font-size: 16px;\n");
    printf("            color: #f0f0f0;\n");
    printf("            background-color: #ff4c4c;\n");
    printf("            text-decoration: none;\n");
    printf("            border-radius: 4px;\n");
    printf("            transition: background-color 0.3s ease;\n");
    printf("        }\n");
    printf("\n");
    printf("        .btn:hover {\n");
    printf("            background-color: #ff1a1a;\n");
    printf("        }\n");
    printf("    </style>\n");
}
void login_failed(char* login)
{
printf("<!DOCTYPE html>\n");
    printf("<html lang=\"en\">\n");
    printf("<head>\n");
    printf("    <meta charset=\"UTF-8\">\n");
    printf("    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
    printf("    <title>Login Incorrect</title>\n");
	style_error();
    printf("</head>\n");
    printf("<body>\n");
    printf("    <div class=\"container\">\n");
    printf("        <h1>Login Incorrect</h1>\n");
    printf("        <p>l'utilisateur %s n'existe pas.</p>\n",login);
    printf("        <a href=\"menu.html\" class=\"btn\">Retourner au menu</a>\n");
    printf("    </div>\n");
    printf("</body>\n");
    printf("</html>\n");
}

void password_failed(char* password)
{
printf("<!DOCTYPE html>\n");
    printf("<html lang=\"en\">\n");
    printf("<head>\n");
    printf("    <meta charset=\"UTF-8\">\n");
    printf("    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
    printf("    <title>Login Incorrect</title>\n");
	style_error();
    printf("</head>\n");
    printf("<body>\n");
    printf("    <div class=\"container\">\n");
    printf("        <h1>Login Incorrect</h1>\n");
    printf("        <p>le mot de passe %s est incorect.</p>\n",password);
    printf("        <a href=\"menu.html\" class=\"btn\">Retourner au menu</a>\n");
    printf("    </div>\n");
    printf("</body>\n");
    printf("</html>\n");

}

void login(char* logged_in,char* password)
{
	int repere=0;
	//system("clear");
	FILE* log_actual_file=NULL;
	FILE* log_file=NULL;
	char buffer[MAX]=" ";
	log_actual_file=fopen("cache/is_already_logged", "r+");
	log_file=fopen("cache/all_login","r+");
	if(log_actual_file==NULL)
	{
		printf("erreur d'ouverture du fichier is_already loged");
		exit(1);
	}

	if(log_file==NULL)
	{
		printf("erreur d'ouverture du fichier all_login");
		exit(1);
	}

	//fgets(logged_in,100,log_actual_file);
		
		//printf("%s-------", password);
		/*mitady an le login oe misy ao am le fichier ve */
		while(fgets(buffer,150,log_file)!=NULL)
		{
		//printf("%s", buffer);
		/*for(int i=0 ; i<strlen(buffer) ; i++)
		{
			printf("%c--", buffer[i]);
		}*/
		//printf("%ld", strlen(buffer));
		//printf("%s %ld",buffer,strlen(buffer));
			if(!compare(logged_in,buffer))
				goto compare_password;
		}

		login_failed(logged_in);
		exit(1);
		
		compare_password:
		if(!check_password(logged_in,password))
		{
			password_failed(password);
			exit(1);
		}
		printf("\t\t");
	//	system("clear");
	
	if(repere>0)
		fprintf(log_actual_file,"%s",logged_in);
	fclose(log_actual_file);
	fclose(log_file);
	ip_section(logged_in);
}

int is_already_in(char* user)
{
	FILE* A=NULL;
	A=fopen("cache/all_login", "r+");
	if(A==NULL)
	{
		printf("erreur lors de l'ouverture du fichier all_login");
		exit(1);
	}
	char buffer[MAX];
	while(fgets(buffer,150,A)!=NULL)
	{
		//printf("eeto llo %s %s\n",buffer,user);
		if(compare(user,buffer)==0)
		{
			//printf("%s-%s",buffer,user);
			return 1;
		}
	}

	return 0;
}

void change_password(char* user)
{
	char password[MAX];
	char buffer[MAX];
	char* str;
	FILE* password_file=NULL;
	FILE* buffer_file=NULL;
	printf("changement du mot de passe de %s",user);
	getchar();
	password_file=fopen("cache/all_password","r+");
	buffer_file=fopen("cache/buffer","w");
	if(buffer_file==NULL)
	{
		printf("erreur d'ouverture du fichier buffer");
		exit(1);
	}
	if(password_file==NULL)
	{
		printf("erreur lors de l'ouverture du fichier all password");
		exit(1);
	}
	ask:
	printf("\nancien:");
	//getchar();
	meo(password);
	rewind(password_file);
	while(fgets(buffer,150,password_file)!=NULL)
	{
		str=strtok(buffer,":");
		if(strcmp(user,str)==0)
		{
			//printf("%s %s", user,buffer);
			goto extract_password;
		}
	}
    printf("identifiant introuvable,erreur");
    exit(1);
	extract_password:
	str=strtok(NULL,":");
	if(compare(password,str)==0)
	{
		printf("daccord\n");
		//getchar();
		goto nouveau_mdp;
	}
	else
	{
		printf("%s %s",password,str);
		printf("mot de passe %s incorect\n",password);
		//getchar();
		goto ask;
	}


	nouveau_mdp:
	printf("nouveau:");
	meo(password);
	printf("daccord");

	rewind(password_file);
	while(fgets(buffer,150,password_file)!=NULL)
	{
		str=strtok(buffer,":");
		if(strcmp(user,str)==0)
		{
			//printf("%s %s", user,buffer);
			//goto extract_password;
			goto next_step;
		}
	}

    
	next_step:
	while(fgets(buffer,150,password_file)!=NULL)
	{
		fprintf(buffer_file,"%s",buffer);
	}
	fclose(buffer_file);
	/*verenana sokafana satria teo mode ajout fa zao atao mode lecture*/
    buffer_file=fopen("cache/buffer","r");
	if(buffer_file==NULL)
	{
		printf("erreur d'ouverture de buffer");
		exit(1);
	}
	rewind(password_file);
	while(fgets(buffer,150,password_file)!=NULL)
	{
		str=strtok(buffer,":");
			if(strcmp(user,str)==0)
		{
			
			//printf("%s %s", user,buffer);
			//goto extract_password;
			goto replace_password;
		}
	}
	printf("utilisateur introuvable\n");
	rewind(password_file);
	goto ask;
	replace_password:
	str=strtok(NULL,":");
	printf("%ld",strlen(str));
	fseek(password_file,-strlen(str),SEEK_CUR);
	/*int c=fgetc(password_file);
	printf("%c", c);	
	*/
	fprintf(password_file,"%s\n", password);
	//int c=fgetc(password_file);
	//printf("%c", c);
	while(fgets(buffer,150,buffer_file)!=NULL)
	{
        /*mijery sode espace vide*/
        if(strchr(buffer,':')!=NULL)
		    fprintf(password_file,"%s\n", buffer);
    }

	int c;
    /*ity manala an le residu tavela any ambany*/

	while((c=fgetc(password_file))!=EOF)
	{
		fputc(' ',password_file);
	}
	fclose(password_file);
	fclose(buffer_file);

}

int check_password(char* user,char* passwd)
{

	int c, user_index=0, password_index=0;
	FILE* password_file=NULL;
	char str[MAX];
	char* buffer;
	char user_buffer[MAX];
	char password_buffer[MAX];

	password_file=fopen("cache/all_password","r+");
	if(password_file==NULL)
	{
		printf("erreur lors de la verification des mot de passe");
		exit(1);
	}	
	while(fgets(str,150,password_file))
	{
		buffer=strtok(str,":");
		strcpy(user_buffer,buffer);
		buffer=strtok(NULL,":");
		strcpy(password_buffer,buffer);
		if(strcmp(user_buffer,user)==0)
		{
			//printf("%s %s %s %s", user_buffer,password_buffer,passwd,user);
			if(compare(passwd,password_buffer)==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	

	
}
void deconnect()
{
	FILE* loggoff=NULL;

	loggoff=fopen("cache/is_already_logged" , "w");

	if(loggoff==NULL)
	{
		printf("probmleme lors de la deconnection");
	}
	getchar();
	fclose(loggoff);
}

void meo(char* str)
{
	int c,index=0;


	while((c=getchar())!='\n')
	{
		str[index]=c;
		index++;
	}
	str[index]='\0';
}

void adduser(char* user,char* password)
{
	FILE* log_in=NULL;
	FILE* password_file=NULL;
	password_file=fopen("cache/all_password","a+");
	log_in=fopen("cache/all_login","a+");
	if(password_file==NULL)
	{
		printf("erreur d'ouverture du fichier all_password");
		exit(1);
	}
	
	if(log_in==NULL)
	{
		printf("erreur d'ouverture du fichier all_login");
		exit(1);
	}

	if(is_already_in(user))
	{
		user_already_in(user);
		exit(1);
	}
	fprintf(password_file,"%s:%s\n",user,password);
	//printf("%s %s",user_name,user_password);
	fprintf(log_in,"%s\n", user);
	//system("sleep(2)");
	user_successfully_added(user);
	fclose(log_in);
	fclose(password_file);
}


int compare(char* A,char* B)
{
	if(strlen(A)!=strlen(B)-1)
	{
		return 1;
	}	
	
	B[strlen(B)-1]='\0';
	if(strcmp(A,B)==0)
		return 0;
	else
		return 1;
}