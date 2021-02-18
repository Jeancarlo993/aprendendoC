#include<stdio.h>

int main(){
	//m para numero total de figurinhas e n para numero que tenho
	int m,n;
	scanf("%d %d",&m,&n);
	//criando um vetor e iniciando todos os valores com 0
	int nfig[m];
	//coloca 0 em todas as posições do vetor nfig
	for(int i=0;i<m;i++){
		nfig[i]=0;
	}
	//armazena no vetor as figurinhas que eu tenho
	for(int i=0;i<n;i++){
		int aux=0;
		scanf("%d",&aux);
		nfig[aux-1]=aux;
	}
	//imprime o valor das figurinhas que não tenho
	for(int i=0;i<m;i++){
		if(nfig[i]==0){
			printf("%d ",i+1);
		}
	}


return 0;}
