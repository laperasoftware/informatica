#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
main(){
	int nr,nc,i,j,scelta,max,cont,somma,med,cit;
	printf("inserire il numero di citta'\n");
	scanf("%d",&nr);
	nc=7;
	cont=0;
	somma=0;
	med=0;
	int M[nr][nc];
	srand(time(0));
			for(i=0;i<nr;i++){
	for(j=0;j<nc;j++){
			M[i][j]=rand()%16-5;
			max=M[i][3];
		}
	}
		for(i=0;i<nr;i++){
			printf("\n");
		for(j=0;j<nc;j++){
			printf("%5d",M[i][j]);
			}
		}
	printf("\nInserire quale opzione si vuole viusalizzare:\n1) Quale città ha avuto la temperatura piu' calda il Giovedi'\n2) Quante  città hanno avuto temperatura sotto lo zero il Lunedi\n3) La temperatura media della terza citta'\n");
	scanf("%d",&scelta);
	if(scelta==1){
			i=3;
			max=M[0][0];
			for(j=1;j<nr+1;j++){
				if(M[i][j]>max){
					max=M[i][j];
					cit=j;
				}
			}
		printf("\nLa citta' con la temperature piu' calda il giovedi e' la citta' numero %d",cit);		
		}
	if(scelta==2){
		j=0;
		for(i=0;i<nr;i++){
			if(M[i][j]<0){
				cont++;
			}
		}
	printf("Le citta' con la temperatura sotto lo zero il Lunedi sono %d",cont);
	}
	if(scelta==3){
		i=2;
		for(j=0;j<nc;j++){
			somma=somma+M[i][j];
		}
		med=somma/7;
		printf("La media sulla citta numero 3 e' %d",med);
	}
	getch();
}
