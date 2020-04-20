
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

float mediaaa (int valori[], int dimensione) {
	int med = 0;
	for (int i = 0; i<dimensione; i++) {
		med = med + valori[i];
	}
	med = med / dimensione;
	return med;
}


int main(){
	int nr,nc,i,j,scelta,min,max,cont,somma,cit,k;
	float med;
	printf("inserire il numero di citta'\n");
	scanf("%d",&nr);
	int medie[nr];
	nc=7;
	cont=0;
	somma=0;
	med=0;
	int M[nr][nc];
	srand(time(0));
	for(i=0;i<nr;i++){ //generazione random delle 7 temperature per ogni città
	    for(j=0;j<nc;j++){
			M[i][j]=rand()%37-5; //da -5 a 31
		}
	}
	//stampa di controllo
	for(i=0;i<nr;i++){
			printf("\n");
		for(j=0;j<nc;j++){
			printf("%5d",M[i][j]);
		}
	}
/*1) QUALE città ha avuto la temperatura più alta
(nell’intera settimana)
2) Chi ha avuto mediamente la temperatura più fredda
(durante tutta la settimana)
3) In che giorno della settimana si è avuta la temperatura
media più bassa (media su tutte le città)*/
	printf("\nInserire quale opzione si vuole viusalizzare:\n1) Quale città ha avuto la temperatura piu' calda il Giovedi'\n2) Quante  città hanno avuto temperatura sotto lo zero il Lunedi\n3) La temperatura media della terza città\n");
	scanf("%d",&scelta);
	if(scelta==1){
			max=M[0][0];
			for(i=1;i<nr;i++){
			for(j=0;j<nc;j++){
				if(M[i][j]>max){
					max=M[i][j];
				}
				cit=i;
			 }
			}
		printf("\nLa citta' con la temperature piu' calda nella settimana e' la citta' numero %d",cit);		
		}
	else if(scelta==2){
		float media [nr]; //per ogni città ho la sua media
		
	
		for (i=0;i<nr;i++) {
			media[i] = 0; //inizializzo x sicurezza
			media [i] = mediaaa(M[i], 7);
		/*	for (int g = 0; g<7; g++) {
				media[i]+=M[i][g]; // a += b <===> a = a + b
			}
			media[i] = media[i]/7.0;
		} */
		}
		min=media[0];
		for(i=0;i<nr;i++){
			if(media[i]<min){
				min=media[i];
				cit=i;
			}
		}		
		for(i=0;i<nr;i++){
		    printf("\n%f",media[i]);
		}
		printf("La temperatura media piu' bassa si e' presentata nella citta %d",cit);				
    }
    else if(scelta==3){
    	/*float media [nr]; //per ogni città ho la sua media			
		for (i=0;i<nr;i++) {
			media[i] = 0; //inizializzo x sicurezza
			media [i] = mediaaa(M[i], 7);
		/*	for (int g = 0; g<7; g++) {
				media[i]+=M[i][g]; // a += b <===> a = a + b
			}
			media[i] = media[i]/7.0;
		} */
		for(i=0;i<n)
		min=media[0];
		for(i=0;i<nr;i++){
			if(media[i]<min){
				min=media[i];
				cit=i;
			}
		}		
		for(i=0;i<nr;i++){
		    printf("\n%f",media[i]);
		}
		printf("La temperatura media piu' bassa si e' presentata il giorno numero %d",cit);				
    }
	getch();
}


