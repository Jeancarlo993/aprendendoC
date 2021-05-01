#include<stdio.h>
#include<string.h>

int main(){
	char nome_arq[100];
	FILE *arq;
	char maior_palavra[100]={'a'};
	char aux[100];

	scanf("%s",nome_arq);
	arq = fopen(nome_arq,"r");
	if(arq==NULL){
		puts("arquivo inexistente");
		return 1;
	}
	else{
		while(fscanf(arq,"%s",aux)!=EOF){
			if(strlen(maior_palavra)<strlen(aux)){
				strcpy(maior_palavra,aux);
			}
		}
	}
	fclose(arq);
	printf("maior palavra: %s ",maior_palavra);
return 0;
}
