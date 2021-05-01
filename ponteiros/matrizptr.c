#include<stdio.h>
#include<stdlib.h>

int main(){
	int **matriz,n;
	scanf("%d",&n);
	//aloquei a quantidade de linhas
	matriz=malloc(2*sizeof(int));
	//quantidade de colunas nas duas linhas
	matriz[0]=malloc(n*sizeof(int));
	matriz[1]=malloc(n*sizeof(int));
return 0;
}
