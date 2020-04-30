#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int len,num,n,k,i;
	printf("inserisci il numero di elementi\n");
	scanf("%d",&len);
	int v[len];
	for(i=0;i<len;i++){
		printf("inserire un valore\n");
		scanf("%d",&v[i]);
	}
	for(i=0;i<len;i++){
	printf("%d",v[i]);
	}
	printf("\ninserire in che posizione eliminare un elemento\n");
	scanf("%d",&k);
	while(k>len){
		printf("posizione non valida, inserirne un altra\n");
		scanf("%d",&k);
	}
	for(i=0;i<len;i++){
		if(v[i]==k){
			v[i]=v[len-1];
			v[len-1]=v[k];
			len--;
		}
	}
	printf("il vettore aggiornato e'\n");
	
	for(i=0;i<len;i++){
	printf("%d",v[i]);
	}
	getch();
}
	
