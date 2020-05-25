#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
int main(){
	int	M1[20][20];
	int M2[20][20];
	int M3[20][20];
	int i,j,c,r,k,q;
	srand(time(0));
	printf("inserire il numero di righe per le matrici (max 20)\n");
	scanf("%d",&r);
	while(r<0||r>20){
	printf("(numero non valido) inserire il numero di righe nuovamente (max 20)\n\n");
	scanf("%d",&r);
	}
	printf("inserire il numero di colonne per le matrici (max 20)\n");
	scanf("%d",&c);
	while(c<0||c>20){
	printf("(numero non valido) inserire il numero di colonne nuovamente (max 20)\n");
	scanf("%d",&c);
	}
	
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		M1[i][j]=rand()%3+1;
		M2[i][j]=rand()%3+1;
		}
	}
	printf("MATRICE 1:\n");
	for(i=0;i<r;i++){
		printf("\n");
	for(j=0;j<c;j++){
		printf("%d\t",M1[i][j]);
		}
	}
	printf("\n");
	printf("\nMATRICE 2:\n");	
	for(i=0;i<r;i++){
		printf("\n");
	for(j=0;j<c;j++){
		printf("%d\t",M2[i][j]);
		}
	}		
	
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		if(M1[i][j]==M2[i][j]){
				M3[i][j]=0;
				}
		else if(M1[i][j]!=M2[i][j]){
				if(M1[i][j]>M2[i][j]){
					M3[i][j]=M1[i][j];
					}
				else if(M2[i][j]>M1[i][j]){
					M3[i][j]=M2[i][j];
					}
				}		
		}	
	}			
	printf("\n");
	printf("\nMATRICE 3:\n");	
	for(i=0;i<r;i++){
		printf("\n");
	for(j=0;j<c;j++){
		printf("%d\t",M3[i][j]);
		}
	}
	printf("\n\n\n\n");	
	printf("BORDI MATRICE 3");
	
	for(i=0;i<r;i++){
		printf("\n");
	for(j=0;j<c;j++){
		if(j==0||j==c-1 || i==0||i==r-1){
			printf("%d\t",M3[i][j]);
		}
		else{
		 printf("-\t");
			} 
		}
	}
	getch(); 
}
