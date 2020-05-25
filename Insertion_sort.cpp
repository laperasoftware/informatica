#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
main(){
	int vet [20];
	int i,j,len,aux;
	srand(time(0));
	printf("inserire lunghezza vettore (Max 20)\n");
	scanf("%d",&len);
	while(len<=0||len>20){
		printf("lunghezza non valida, inserirne una valida\n");
		scanf("%d",&len);
	}
	for(i=0;i<len;i++){
		vet[i]=rand()%20-5;
	}
	for(i=0;i<len;i++){
		printf("%d\t",vet[i]);
	}
	for(i=1;i<len;i++){
		aux=vet[i];
		j=i-1;
	while(aux<vet[j]&&j>=0){
		vet[j+1]=vet[j];
		j--; 
	}
	vet[j+1]=aux;		
	}
	printf("\nVETTORE RIORDINATO:\n");
	for(i=0;i<len;i++){
		printf("%d\t",vet[i]);
	}
}
