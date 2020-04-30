#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int len,i;
	int v[20];
	printf("inserisci il numero di elementi\n");
	scanf("%d",&len);
	for(i=0;i<len;i++){
		printf("inserire un valore\n");
		scanf("%d",&v[i]);
	}
	for(i=0;i<len;i++){
	printf("%d",v[i]);
	}
	printf("\nInserire un altro numero nel vettore\n");
	scanf("%d",&v[len]);
	len++;
	
	printf("il vettore aggiornato e'");
	for(i=0;i<len;i++){
	printf("%d",v[i]);
	}
	getch();
}
