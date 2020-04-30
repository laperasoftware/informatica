
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
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
	printf("\nInserire quale opzione si vuole viusalizzare:\n1) Quale citta' ha avuto la temperatura piu' alta nell’intera settimana\n2) Chi ha avuto mediamente la temperatura piu'fredda (in tutta la settimana)\n3) In che giorno della settimana si e' avuta la temperatura media piu' bassa\n");
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
		printf("\nLa temperatura media piu' bassa si e' presentata nella citta %d",cit);				
    }


    else if(scelta==3){ //giorno della settimana con temperatura media più bassa

    	//la temperatura media per ogni giorno
    	int mediaGiornaliera [7]; //fisso subito dimensione essendoci 7 giorni

    	int sum, media;

    	for (int g = 0; g < 7; ++g)//per ogni giorno della settimana
    	{
    		int sum = 0; //inizializzo
    		for (int citta = 0; citta < nr; ++citta) //fissato il giorno giro tutte le citta
    			{
    				sum += M[citta][g];
    			}	
    		mediaGiornaliera[g] = sum / nr;
    	}
		
		printf("\n MEDIE GIORNALIERE: \n");
		for (int med = 0; med < 7; ++med) //stampa di debug per vedere se funziona
		{
			printf("%d\t", mediaGiornaliera[med]);
		}

		//trovo indice elemento minimo
		int minimo = 1024; //inizializzo a valore non possibile
		int indiceMinimo = -1;

		for (int g = 0; g<7; g++) {
			if (mediaGiornaliera[g]<minimo) {
				indiceMinimo = g;
				minimo = mediaGiornaliera[g];
			}
		}
		printf("\n\nIl giorno come la temperatura media piu bassa e' %d\n\n", indiceMinimo + 1);
    }
	getch();
}


