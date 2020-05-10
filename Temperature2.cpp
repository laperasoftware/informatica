
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
	for(i=0;i<nr;i++){ 
	    for(j=0;j<nc;j++){
			M[i][j]=rand()%37-5; 
		}
	}

	for(i=0;i<nr;i++){
			printf("\n");
		for(j=0;j<nc;j++){
			printf("%5d",M[i][j]);
		}
	}
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
		float media [nr];
		
	
		for (i=0;i<nr;i++) {
			media[i] = 0; 
			media [i] = mediaaa(M[i], 7);
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


    else if(scelta==3){ 
    	int mediaGiornaliera [7]; 

    	int sum, media;

    	for (int g = 0; g < 7; ++g)
    	{
    		int sum = 0; 
    		for (int citta = 0; citta < nr; ++citta) 
    			{
    				sum += M[citta][g];
    			}	
    		mediaGiornaliera[g] = sum / nr;
    	}
		
		printf("\n MEDIE GIORNALIERE: \n");
		for (intmed=0;med<7;++med) 
		{
			printf("%d\t", mediaGiornaliera[med]);
		}
		int minimo=1024; 
		int indiceMinimo=-1;
		for (intg=0;g<7;g++) {
			if (mediaGiornaliera[g]<minimo) {
				indiceMinimo = g;
				minimo = mediaGiornaliera[g];
			}
		}
		printf("\n\nIl giorno come la temperatura media piu bassa e' %d\n\n", indiceMinimo + 1);
    }
	getch();
}


