#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int v[20];
	int i,k,len,val;
	val=0;
	printf("inserire la lunghezza del vettore\n");
	scanf("%d",&len);
	for(i=0;i<len;i++){
		printf("inserire un valore (maggiore/uguale del precedente)\n");
		scanf("%d",&val);				
		while(val<v[i-1]&&i>0){
		printf("il valore inserito non e' valido, inserirlo nuovamente\n");	
		scanf("%d",&val);
		}
		v[i]=val;		
	}
	for(i=0;i<len;i++){
		printf("%5d",v[i]);
	}
	printf("\ninserire il numero che si vuole inserire nel vettore\n");
	scanf("%d",&k);
	for(i=0;i<len;i++){
		if(v[i]<k&&v[i+1]>k){
			printf("il numero verra' inserito fra la posizione %d e la posizione %d\n",i+1,i);
		}
	}
}
