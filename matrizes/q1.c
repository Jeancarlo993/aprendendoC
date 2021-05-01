#include<stdio.h>
int main(){
	int m,n;
	int fertil=0;
	int irrigado=0;
	int v[12][12]={{0},{0}};
		scanf("%d %d",&m,&n);
		//mapeando o terreno
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				scanf("%d",&v[i][j]);
			}
		}
		//checando irrigados
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if (v[i][j]==1){ 
					fertil++;
					if(v[i+1][j]==2||v[i-1][j]==2||v[i][j+1]==2||v[i][j-1]==2){
						irrigado++;
					}			
				}
			}

		}
		printf("%d %d",irrigado,fertil-irrigado);

return 0;
}
