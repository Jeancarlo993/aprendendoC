#include<stdio.h>
#include<string.h>
#include<ctype.h>

//função para contar quantas vezes s1 aparece em s2

int strsrc(char s1[],char s2[]){
	int tamanho=strlen(s1);
	int cont=0;
	int sn; 

	for(int i=0;i<strlen(s2)+1;i++){
		//se a primeira letra for igual
		if(s2[i]==s1[0]&&isupper(s2[i])){
			//testar as demais letras
			for(int j=0;j<tamanho;j++){
				//se a letra for igual
				if(s1[j]==s2[i+j]){
					sn=1;
				}
				else{
					sn=0;
					break;
				}
			}
			//se todas forem iguais
			if(sn==1){
				cont++;
			}
		}
	}
	return cont;
}

int main(){
	char nome[10];
	char chamada[1001];
	scanf("%s",nome);
	fgets(chamada,1001,stdin);
	
	int presente=strsrc(nome,chamada);
	int aulas=0;
	int i=0;
	while(i<strlen(chamada)+1){
		if(isdigit(chamada[i])){
			aulas++;
			i=i+6;	
		}
		else{
			i++;
		}
	
	}
	printf("%d",aulas-presente);
	
	return 0;
}
