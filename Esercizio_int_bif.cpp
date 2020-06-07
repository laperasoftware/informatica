#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
main(){
	int i,j,r,c,cont,somma;
	int M[50][50];
	cont=0;
	somma=0;
	printf("Inserire il numero di righe (max 50)\n");
	scanf("%d",&r);
	while(r>50||r<0){
		printf("Dimensione non valida, inserirla nuovamente\n");
		scanf("%d",&r);
	}
	printf("Inserire il numero di colonne (max 50)\n");
	scanf("%d",&c);
	while(c>50||c<0){
		printf("Dimensione non valida, inserirla nuovamente\n");
		scanf("%d",&c);
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			M[i][j]=cont;
			cont++;
		}
	}
	for(i=0;i<r;i++){
		printf("\n");
		for(j=0;j<c;j++){
			printf("%5d",M[i][j]);
		}
	}
	if(c%2==1){
		printf("\nStampa colonna centrale\n");
		j=c/2;
		for(i=0;i<r;i++){
			printf("%d\n",M[i][j]);
			somma=somma+M[i][j];
		}
	printf("La somma e' %d",somma);
	}
	else{
		printf("La matrice non ha una colonna centrale");
	}
	getch();
}
