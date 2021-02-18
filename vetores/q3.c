#include<stdio.h>

int main(){
	//lendo as informações
	int n,maiorp=0,indice,dist=0;
	int pontos[30]={0,0};
	scanf("%d",&n);
	//armazenando pontos 
	for(int i=0;i<n;i++){
		scanf("%d",&pontos[i]);
	}
	//chechando maior
	for(int i=0;i<n;i++){
		if(pontos[i]>maiorp){
			maiorp=pontos[i];
			indice=i;
		}
	}
	//checando distancia
	for(int i=indice+1;i<n;i++){
		if(pontos[i]!=maiorp){
			dist++;
		}
		else{
			printf("%d",dist);
			break;
		}
	}


return 0;
}
