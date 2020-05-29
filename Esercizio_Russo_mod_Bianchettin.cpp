/*
Sviluppare un programma in grado di gestire un matrice di dimensione NxM con N e M stabilite dall'utente, massimo 50x50.
Deve essere possibile stampare la diagonale principale e la relativa somma, ove presente, quella secondaria con la somma 6 case ,
la somma della riga selezionata dall'utente, la somma della colonna selezionata dall'utente,
il conteggio dei valori pari sulla riga centrale e di quelli dispari sulla colonna centrale(sempre se presente).
Il programma avrà quindi 7 case attivi, ovvero i 6 punti precedenti e il case 7 relativo all'uscita dal programma.
La matrice verrà caricata con valori random compresi tra 5 e -5.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#define rig 50
#define col 50


main()
{
	int mat[rig][col];
	int v1[rig];
	int v2[rig];
	int n,m,i,j,r,c,cont,cont1,somma,scelta;
	bool npresente=false,mpresente=false;
	
	cont1=1;
	
	do
	{
		printf("Inserire numero righe(MAX. 50): ");
		scanf("%d",&n);
	}
	while(n<1||n>rig);	
	if(n%2==1){
		npresente=true;
	}
	
	do
	{
		printf("Inserire numero colonne(MAX. 50): ");
		scanf("%d",&m);
	}
	while(n<1 || n>col);
	
	if(m%2==1)
	{
		mpresente=true;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			mat[i][j]=cont1;
			cont1++;
		}
	}
	
	do
	{
		system("cls");
		
		printf("Questa e' la tua matrice:\n");
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%3d",mat[i][j]);
			}
			printf("\n");
		}
		
		printf("\nInserisci:\n");
		printf("1) Stampare la diagonale principale e la relativa somma\n");
		printf("2) Stampare la diagonale secondaria e la relativa somma\n");
		printf("3) La somma della riga R (selezionata dall'utente)\n");
		printf("4) La somma della colonna C (selezionata dall'utente)\n");
		printf("5) Il conteggio dei valori pari sulla riga centrale (se presente)\n");
		printf("6) Il conteggio dei valori dispari sulla colonna centrale (se presente)\n");
		printf("7) Scambiare diagonale principale con la diagonale secondaria\n");
		printf("0) Uscita\n");
		scanf("%d",&scelta);
		
		switch(scelta)
		{
			case 1:
				if(n==m)
				{
					somma=0;
				
					for(i=0;i<n;i++)
					{
						printf("%3d",mat[i][i]);
						printf("\n");
						somma=somma+mat[i][i];
					}
				
					printf("\nLa somma e' %d\n",somma);
				}
				else
				{
					printf("La diagonale pricipale non e' presente");
				}
				
				Sleep(500);
						
				printf("\n\nPremi INVIO per scegliere altre opzioni");
						
				getch();
				
			break;
			
			case 2:
				if(n==m)
				{
					somma=0;
				
					j=m-1;
					i=0;
	
					while(i<n && j>=0)
					{
						printf("%3d",mat[i][j]);
						printf("\n");
						somma=somma+mat[i][j];
						i++;
						j--;
					}
				
					printf("\nLa somma e' %d\n",somma);
				}
				else
				{
					printf("La diagonale secondaria non e' presente");
				}
				
				Sleep(500);
						
				printf("\n\nPremi INVIO per scegliere altre opzioni");
						
				getch();
				
			break;
			
			case 3:
				somma=0;
				
				printf("Inserire numero della riga: ");
				scanf("%d",&r);
				
				for(j=0;j<m;j++)
				{
					somma=somma+mat[r-1][j];
				}
				
				printf("\nLa somma e' %d\n",somma);
				
				Sleep(500);
						
				printf("\n\nPremi INVIO per scegliere altre opzioni");
						
				getch();
			break;
			
			case 4:
				somma=0;
				
				printf("Inserire numero della colonna: ");
				scanf("%d",&c);
				
				for(i=0;i<n;i++)
				{
					somma=somma+mat[i][c-1];
				}
				
				printf("\nLa somma e' %d\n",somma);
				
				Sleep(500);
						
				printf("\n\nPremi INVIO per scegliere altre opzioni");
						
				getch();
			break;
			
			case 5:
				if(npresente)
				{
					cont=0;				
					
					i=n/2;
				
					for(j=0;j<m;j++)
					{
						if(mat[i][j]%2==0)
						{
							cont++;
						}
					}
				
					printf("I valori pari della riga centrale sono %d\n",cont);
				}
				else
				{
					printf("La riga centrale non e' presente\n");
				}
				
				Sleep(500);
						
				printf("\n\nPremi INVIO per scegliere altre opzioni");
						
				getch();
			break;
			
			case 6:
				if(mpresente)
				{
					cont=0;
					
					j=m/2;
					
					for(i=0;i<n;i++)
					{
						if(mat[i][j]%2==1)
						{
							cont++;
						}	
					}
				
					printf("I valori dispari della colonna centrale sono %d\n",cont);
				}
				else
				{
					printf("La colonna centrale non e' presente\n");
				}
				
				Sleep(500);
						
				printf("\n\nPremi INVIO per scegliere altre opzioni");
						
				getch();
			break;
			
			case 7:
				if(n==m)
				{
					for(i=0;i<n;i++)
					{
						for(j=0;j<m;j++)
						{
							if(i+j==n-1)
							{
								v1[i]=mat[i][j];
							}
						}
					}
					
					for(i=0;i<n;i++)
					{
						for(j=0;j<m;j++)
						{
							if(i==j)
							{
								v2[i]=mat[i][j];
							}
						}
					}
				
					for(i=0;i<n;i++)
					{
						for(j=0;j<m;j++)
						{
							if(i==j)
							{
								mat[i][j]=v1[i];	
							}
						}
					}
					
					for(i=0;i<n;i++)
					{
						for(j=0;j<m;j++)
						{
							if(i+j==n-1)
							{
								mat[i][j]=v2[i];
							}
						}
					}
				}
				else
				{
					printf("La diagonale pricipale non e' presente");
				}
				
				Sleep(500);
						
				printf("\n\nPremi INVIO per scegliere altre opzioni");
						
				getch();
				
			break;
		}

	}
	while(scelta!=0);

}
