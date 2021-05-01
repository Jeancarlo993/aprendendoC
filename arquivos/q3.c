#include<stdio.h>
#include<string.h>

int main(){
	FILE * arq;
	char nome_arquivo[100];
	char padrao[100];
	char aux[100];
	int cont;

	scanf("%s",nome_arquivo);
	scanf("%s",padrao);

	arq= fopen(nome_arquivo,"r");
	if(arq==NULL){
		printf("arquivo não encontrado");
		return 1;
	}
	else{
		while(fscanf(arq,"%s",aux)!=EOF){
			if(strlen(aux)==strlen(padrao)){
				cont=0;
				while(padrao[cont]!='\0'){
					if(padrao[cont]!='*'){
						if(padrao[cont]!=aux[cont]){
							break;
						}
						else{
							cont++;
						}
					}
					else{
						cont++;
					}		
					if(cont==strlen(padrao)){
						printf("%s ",aux);
					}
				}
			}
		}	
	}

return 0;
}
