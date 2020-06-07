#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
main(){
	int i,j,r,c,max,col;
	int M[50][50];
	srand(time(0));
	printf("Inserire il numero di righe\n");
	scanf("%d",&r);
	while(r<0||r>10){
		printf("Dimensione non valida\n");
		scanf("%d",&r);
	}
	printf("Inserire il numero di colonne\n");
	scanf("%d",&c);
	while(c<0||c>10){
		printf("Dimensione non valida\n");
		scanf("%d",&c);
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			M[i][j]=rand()%101-50;
		}
	}
		for(i=0;i<r;i++){
			printf("\n");
		for(j=0;j<c;j++){
			printf("%5d",M[i][j]);
		}
	}
	if(r%2==1){
		printf("\nConteggio valori dispari nella righa centrale\n");
		i=r/2;
		max=M[0][0];
		for(j=0;j<c;j++){
			if(M[i][j]%2==1){
				if(M[i][j]>max){
					max=M[i][j];
				}
				
			}
		}
		printf("Il massimo e' %d",max);
	}
	else{
		printf("\nla matrice non ha una riga centrale");
	}
	
	col=c-1;
	for(i=0;i<r;i++){
		printf("\n%d",M[i][col]);
		col--;
	}
}
