#include<stdio.h>

int main(){
	int m,n; //m quantidade de numeros sorteados e n numeros de uma aposta
	scanf("%d %d",&m,&n);
	int sorteados[m];
	int aposta[n];
	int cont=0;
	for(int i=0;i<m;i++){
		scanf("%d",&sorteados[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&aposta[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(aposta[i]==sorteados[j]){
				cont++;
			}	
		}
	}
	printf("%d",cont);
return 0;
}
