#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int v[2048];
	for (int i =0; i<2048; i++) {
	    v[i] = 0;
	}
	int tipovettore,scelta,i,len,j,aux,tipoordine,pos,x,k,c;
	aux=0;
	len = -1;
	printf("Inserire se usare un vettore ordinato (1) o non ordinato (0)\n");
	scanf("%d",&tipovettore);
	while(tipovettore>1||tipovettore<0){
		printf("opzione non valida inserirla nuovamente\n");
		scanf("%d",&tipovettore);
	}
	if(tipovettore==1){
		do{
			printf("\n\ninserire una fra le suguenti scelte:\n");
			printf("1) Leggere il vettore\n");
			printf("2) Stampare gli elementi del vettore in ordine crescente\n");
			printf("3) Inserire un elemento\n");
			printf("4) 0 Per uscire\n");
			scanf("%d",&scelta);
			switch(scelta){
				case 1:
					printf("STAMPA DEL VETTORE\n");
					printf("inserire la lunghezza del vettore (max 20)\n");
					scanf("%d",&len);
					while(len>20){
						printf("lunghezza non valida\n");
						scanf("%d",&len);
					}
					printf("Selezionare se vettore ordinato in ordine crescente (1) o decrescente (0)\n");
					scanf("%d",&tipoordine);
					if(tipoordine==1){
					for(i=0;i<len;i++){
						printf("inserire un valore (vettore crescente)\n");
						scanf("%d",&v[i]);
						while(v[i]<v[i-1]){
							printf("valore non valido inserirlo nuovamente\n");
							scanf("%d",&v[i]);
						}
					}
					for(i=0;i<len;i++){
						printf("%d\t",v[i]);
						}
					}
					if(tipoordine==0){
						printf("inserire un valore (vettore decrescente)\n");
						scanf("%d",&v[0]);
						for(i=1;i<len;i++){
						printf("inserire un valore (vettore decrescente)\n");
						scanf("%d",&v[i]);
						while(v[i-1]<=v[i]){
							printf("valore non valido inserirlo nuovamente\n");
							scanf("%d",&v[i]);
						}
					}
					for(i=0;i<len;i++){
						printf("%d\t",v[i]);
					}
					}
					break;
				case 2:
					printf("STAMPA DEGLI ELEMENTI IN ORDINE CRESCENTE\n");
					for(j=0;j<len;j++){
					for(i=0;i<len-1;i++){
						while(v[i]>v[i+1]){
							aux=v[i];
							v[i]=v[i+1];
							v[i+1]=aux;
							}
						}
					}
					for(i=0;i<len;i++){
					printf("%d\t",v[i]);
					}
					break;
				case 3:	
					printf("INSERIMENTO DI UN NUMERO IN UN VETTORE\n");
					printf("\ninserire il numero che si vuole inserire nel vettore\n");
					scanf("%d",&x);
					if(len==-1) {
					    len=1;
					}
					v[len]=x; 
					len++;
					 for(k=0; k<len;k++) {
				        for (c=0;c<len-1;c++) {
				             if(v[c]>v[c+1]) {
				                 int aux = v[c+1];
				                 v[c+1] = v[c];
				                 v[c] = aux;
				             }
				         }
					 }
					for(i=0;i<len;i++){
					printf("%d\t",v[i]);
					}		
					break;	
		}
	}
		while(scelta!=4&&scelta<4);
	}
	else if(tipovettore==0){
		do{
			printf("\n\ninserire una fra le suguenti scelte:\n");
			printf("1) Leggere il vettore\n");
			printf("2) Stampare gli elementi del vettore in ordine crescente\n");
			printf("3) Inserire un elemento\n");
			printf("4) 0 Per uscire\n");
			scanf("%d",&scelta);

			switch(scelta){
				case 1:
					printf("STAMPA DEL VETTORE\n");
					printf("inserire la lunghezza del vettore (max 20)\n");
					scanf("%d",&len);
					while(len>20){
						printf("lunghezza non valida\n");
						scanf("%d",&len);
					}
					for(i=0;i<len;i++){
						printf("inserisci un valore\n");
						scanf("%d",&v[i]);
					}
					for(i=0;i<len;i++){
						printf("%d\t",v[i]);
						}
					break;
				case 2:
					printf("STAMPA DEGLI ELEMENTI IN ORDINE CRESCENTE\n");
					if(len <0) {
					    printf("\nerrore vettore non dichiarato");
					    break;
					}
					for(j=0;j<len;j++){
					for(i=0;i<len-1;i++){
						while(v[i]>v[i+1]){
							aux=v[i];
							v[i]=v[i+1];
							v[i+1]=aux;
							}
						}
					}
					for(i=0;i<len;i++){
					printf("%d\t",v[i]);
					}
					break;
				case 3:	
					printf("INSERIMENTO DI UN NUMERO IN UN VETTORE\n");
					printf("\ninserire il numero che si vuole inserire nel vettore\n");
					scanf("%d",&x);
					if(len==-1) {
					    len=1;
					}
					v[len]=x; 
					len++;
					 for(k=0; k<len;k++) {
				        for (c=0;c<len-1;c++) {
				             if(v[c]>v[c+1]) {
				                 int aux = v[c+1];
				                 v[c+1] = v[c];
				                 v[c] = aux;
				             }
				         }
					 }
					for(i=0;i<len;i++){
					printf("%d\t",v[i]);
					}		
					break;						
		}
	}
		while(scelta!=4&&scelta<4);
	}				
		
}

