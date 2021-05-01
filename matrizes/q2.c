#include<stdio.h>
int main(){
//m usuarios
//b é sugerido para a se eles não forem amigos e possuirem pelo menos um amigo em comum
//1 se
	int m,x;
	scanf("%d",&m);
	int v[m][m];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&v[i][j]);
		}
	}

	scanf("%d",&x);
	//procurando na linha do x os que não são amigos
	for(int i=0;i<m;i++){
		if(i!=x&&v[x][i]==0){
			//comparando a linha do que n é amigo com a linha do x
			for(int j=0;j<m;j++){
				//se for igual e for 1 então imprime i e encerra o laço
				if(v[i][j]==v[x][j]&&v[i][j]==1){
					printf("%d ",i);
					break;
				}
			}

		
		}
	}
	
return 0;
}
