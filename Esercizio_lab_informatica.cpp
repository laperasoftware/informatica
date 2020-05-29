#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
int main(){ 
	int i,j,r,c,t,sr,sc,scelta;
	sc=0;
	sr=0;
	srand(time(0));
	printf("Inserire il numero delle righe (MAX 20):");
	scanf("%d",&r);
	while(r<0 || r>20){
		printf("Dimensione non valida inserire nuovamente\n");
		scanf("%d",&r);
	}
	printf("Inserire il numero delle colonne (MAX 20):");
	scanf("%d",&c);
	while(c<0 || c>20){
		printf("Dimensione non valida inserire nuovamente\n");
		scanf("%d",&c);
	}
	
	int M[r][c];
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			M[i][j]=rand()%201-100;
		}
	}

		for(i=0;i<r;i++){
			printf("\n");
		for(j=0;j<c;j++){
			printf("%5d",M[i][j]);
			}
		}
	printf("\nSelezionare una fra le seguenti opzioni: \n 1) stampare la colonna centrale\n 2) stampare la riga centrale\n 3) stampare la somma degli elementi della colonna centrale\n 4) stampare la somma degli elementi della riga centrale\n 5) Uscita\n ");
	scanf("%d",&scelta);
	if(scelta==1){		
		if(r%2==0){
			printf("Nella matrice non e' presente la riga centrale\n");
			}
		else{
			for(i=0;i<r;i++){
				printf("\n");
				printf("%d",M[i][r/2]);
					}
				}
				printf("\n");
			}

		if(scelta==2){
				if(c%2==0){
					printf("Nella matrice non e' presente la colonna centrale\n");
					}
				else{
					for(j=0;j<r;j++){
						printf("\t");
						printf("%d",M[c/2][j]);
					}
				printf("\n");
				}
			}
		if(scelta==3)
				if(r%2==0){
					printf("Nella matrice non e' presente la colonna centrale\n");
				}
				else{
					printf("\n");
					for(i=0;i<c;i++){
						sr=sr+M[i][r/2];
					}				
					printf("La somma della colonna centrale e':%d\n",sr);
				}
		if(scelta==4){
				if(c%2==0){
					printf("Nella matrice non e' presente la riga centrale\n");				
				}
				else{
					printf("\n");
					for(j=0;j<r;j++){
						sc=sc+M[c/2][j];
					}
					
					printf("La somma della riga centrale e':%d\n",sc);
				}
			}
		if(scelta==5){
		}	
	getch();
}
