#include<stdio.h>
#include<stdlib.h>

int * buscaNoVetor(int *v,int n, int valor, int *qtd){
	*qtd=0;
	//criando um vetor para os indices
	int *indices=malloc(sizeof(int));
	//contando as ocorrências
	for(int i=0;i<n;i++){
		if(v[i]==valor){
			//soma 1 ao contador
			*qtd=*qtd+1;
			//aumenta o espaço do vetor indices
			indices = realloc(indices,*qtd * sizeof(int));
			//armazena o indice no vetor indices
			indices[*qtd-1]=i;
		}	
	}
	//liberando v
	free(v);
	
	//retorna NULL caso não encontre ocorrências
	if(*qtd==0){
		printf("Nenhuma ocorrencia");
		return NULL;
	}

	//retorna o endereço base de indices
	return indices;
	
	//v endereço do vetor a ser analisad
	//n quantidade de inteiros no vetor
	//valor é o valor buscado no vetor
	//qtd um ponteiro para inteiro que contém enderço das ocorrências
}


int main(){
	int n,procurado,contador,*u,*ind;
	scanf("%d",&n);
	u=malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",(u+i));
	}
	scanf("%d",&procurado);
	ind=buscaNoVetor(u,n,procurado,&contador);
	printf("%d \n",contador);
	for(int i=0;i<contador;i++){
		printf("%d ",ind[i]);
	}
	
return 0;
}
