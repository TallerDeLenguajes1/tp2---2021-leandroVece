#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define M 5
#define N 15

void cargar(int **matris, int *par, int col,int i);
void cargarDos(int **matris, int **matris2,int col, int i);
void leer(int ** matris2,int i, int col);

int main(){
	srand(time(NULL));
	
	int **matris,**matris2;
	int par=0, par2, col,i;
	int aux[15];
	

	
	
	matris = (int**)malloc(sizeof(int*)*15);
	matris2 = (int**)malloc(sizeof(int*)*15);
	
	for(i = 0;i<15; i++)
	{
		col = rand () % (N-M+1) + M;
		cargar(matris,&par,col,i);
		
		cargarDos(matris,matris2,par,i);
		
		aux[i]=par;
		par =0;
	}
	
	
	printf("\nSegunda\n");
	for(i = 0;i<15; i++){	
		leer(matris2,i,aux[i]);
	}
			
	return 0;
}

void cargar(int **matris, int *par,int col,int i){
	
	int  j;	

	
		matris[i] = (int*)malloc(sizeof(int)*col);
		
		for(j = 0;j<col; j++)
		{
			matris[i][j] = rand() % (999 - 100 +1 ) + 100;
			if(matris[i][j] %2 ==0){
				*par = *par + 1;
			}
			printf("%d  ", matris[i][j]);
		}
		printf("\n");
	
}

void cargarDos(int **matris, int **matris2,int col, int i){
	
		int  j,k=0;	
		matris2[i] = (int*)malloc(sizeof(int)*col);
		for(j = 0;k<col; j++)
		{
			if(matris[i][j] %2 ==0){
				matris2[i][k] =  matris[i][j];
				k++;
			}
		}
	
	
}

void leer(int ** matris2,int i, int col){
	int j;
	for(j = 0;j<col; j++){
		printf("%d  ", matris2[i][j]);	
	}
	printf("\n");

	
}

