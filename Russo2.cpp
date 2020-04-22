
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
int main(){ int i,j,r,c,t,sr,somma,sc,scelta;
	sc=0;
	sr=0;
	somma=0;
	printf("Inserire il numero delle righe (MAX 50):");
	scanf("%d",&r);
	while(r<0 || r>50){
		printf("Dimensione non valida inserire nuovamente\n");
		scanf("%d",&r);
	}
	printf("Inserire il numero delle colonne (MAX 50):");
	scanf("%d",&c);
	while(c<0 || c>50){
		printf("Dimensione non valida inserire nuovamente\n");
		scanf("%d",&c);
	}
	
	int M[r][c];
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			M[i][j]=rand()%201-100;
		}
	}
	printf("\n matrice riempita");

		for(i=0;i<r;i++){
			printf("\n");
			for(j=0;j<c;j++){
				printf("%5d",M[i][j]);
			}
		}
		printf("\n matrice stampata");
		/*Deve essere possibile stampare
		la diagonale principale e la relativa somma,
		ove presente, quella secondaria con la somma6 case , 
		la somma della riga selezionata dall'utente, 
		la somma della colonna selezionata dall'utente, 
		il conteggio dei valori pari sulla riga centrale e di quelli dispari sulla colonna centrale(sempre se presente)*/
	
	
	/*printf("\nselezionare una fra le seguenti opzioni: \n 1) stampare la diagonale principale e la relativa somma\n 
	//2) ove presente, quella secondaria con la somma6 case\n 
	3) la somma della riga selezionata dall'utente\n 
	4) la somma della colonna selezionata dall'utente\n 
	5) il conteggio dei valori pari sulla riga centrale e di quelli dispari sulla colonna centrale\n
	 6) uscita\n ");*/
	 printf("\n INSERIRE SCELTA:\t");
	scanf("%d",&scelta);

	if(scelta==1){	
	printf("\n somma diagonale:"); 
		somma = 0;			
		for(i=0;i<r;i++){
			somma += M[i][i];
		}
		/*
	for(i=0;i<r;i++){
		printf("\n");
	for(j=0;j<c;j++){
		if(i+j==r-1){
			printf("%5d",M[i][j]);
			}
			else{
				printf("     ");
			}
		} */
	printf("\nla somma degli elementi e'%d",somma);
	
	//somma diagonale secondaria
	int somma2 = 0;

		for(i=0;i<r;i++){

	for(j=0;j<c;j++){
		if(i+j==r-1){
			somma2 += M[i][j];
			}
} 
		}
	printf("\nla somma degli elementi (d. secondaria) e' %d",somma2);
} 


		if(scelta==2){
				if(c%2==0){
					printf("Nella matrice non e' presente la colonna centrale\n");
					}
					
					for(j=0;j<r;j++){
						printf("\n");
						printf("%d",M[c/2][j]);
					}
				printf("\n");
				}
		if(scelta==3){
				if(r%2==0){
					printf("Nella matrice non e' presente la riga centrale\n");
				}
				else{
					printf("\n");
					for(i=0;i<c;i++){
						sr=sr+M[i][r/2];
					}				
					printf("La somma della riga centrale e':%d\n",sr);
				}
			}
		if(scelta==4){
				if(c%2==0){
					printf("Nella matrice non e' presente la colonna centrale\n");				
				}
				else{
					printf("\n");
					for(j=0;j<r;j++){
						sc=sc+M[c/2][j];
					}
					
					printf("La somma della colonna centrale e':%d\n",sc);
				}
			}
			if(scelta==5){
			}

		
	getch();
}
