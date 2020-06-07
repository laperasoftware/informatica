#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<string.h>
main()
{
	int len;
	char stringa [20],stringa2 [20];
	
	do{
	
	printf("inserire la frase (max 20 cartatteri): ");
	gets(stringa);
	
	len=strlen(stringa);
	
	}while(len>20);
	
	printf("la stringa inserita e': ");
	
	puts(stringa);
	
	do{
		printf("inserire la frase (massimo 20 caratteri)\n");
		gets(stringa2);
		len=strlen(stringa2);
	}while(len>20);
	printf("La stringa inserita e' ");
	puts(stringa2);
	
	if(strcmp(stringa,stringa2)==0){
		printf("%s e' uguale a %s",stringa,stringa2);
	}
	else{
		printf("Le 2 stringhe non sono uguali");
	}
		
	getch();
}
