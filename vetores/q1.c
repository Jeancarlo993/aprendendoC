#include <stdio.h>
//função que lê e armazena as respostas para as n questões em um vetor
void armazen(int v[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
}
int main(){
	//lendo quantidade de questões
	int q, contador=0;
	scanf("%d",&q);
	//declarando os vetores das respostas dadas e do gabarito
	int gabarito[q],resposta[q];
	armazen(gabarito,q);
	armazen(resposta,q);
	//comparando respostas
	for(int i=0;i<q;i++){
		if(gabarito[i]==resposta[i]){
			contador++;
		}
	}
	//imprimindo resultado
	if(contador==1){
		printf("%d acerto",contador); 
	}
	else{
		printf("%d acertos",contador);	
	}
return 0;
}
