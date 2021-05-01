#include<stdio.h>
int main(){
	int m,x,z;
	int v[10][10];
	int aux;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&v[i][j]);
		}
	}
	scanf("%d %d",&x,&z);
	int valorbase=v[x][z];
	for(int i=0;i<m;i++){
		if(v[x][i]<valorbase&&v[x][i]>0){
			if(v[i][z]+v[x][i]<valorbase){
				valorbase=v[i][z]+v[x][i];
				aux=i;
			}
		}
	}
	if(valorbase==v[x][z]){
		printf("%d-%d R$%d",x,z,valorbase);
	}
	else{
		printf("%d-%d-%d R$%d",x,aux,z,valorbase);
	}
return 0;
}

