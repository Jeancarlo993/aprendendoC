#include<stdio.h>

int main(){
	//atribuindo um vetor das dicas começando com 0
	int ilhas[10];
	int visitas[11]={0};
	for(int i=0;i<10;i++){
		scanf("%d",&ilhas[i]);
	}
	//vetor com a sequênca  das ilhas visitadas
	int aux=ilhas[0];
	visitas[1]=ilhas[0];
	for(int i=2;i<11;i++){
		visitas[i]=ilhas[aux];
		aux=ilhas[aux];
	}
	//checando quem repete primeiro
	for(int i=0;i<11;i++){
		for(int j=i+1;j<11;j++){
			if(visitas[i]==visitas[j]){
				printf("%d",visitas[i]);
				return 0;
			}
		}
	}
}
