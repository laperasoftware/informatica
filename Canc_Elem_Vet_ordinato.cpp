#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int v[20];
	int i,k,len,val,x,pos;
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
	printf("\ninserire il numero che si vuole eliminare dal vettore\n");
	scanf("%d",&x);
	for(i=0;i<len;i++){
		if(v[i]==x){		
			pos=i;
			v[pos]=0;
		}
	}
	for(i=pos;i<=len-1;i++){
		v[i]=v[i+1];
	}
	len--;
	for(i=0;i<len;i++){
		printf("%d",v[i]);
	}
}
