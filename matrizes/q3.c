#include<stdio.h> 

int main(){
	int m,cont;
	scanf("%d",&m);
	int v[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&v[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(i!=j&&v[i][j]==v[j][i]){
				cont++;
			}
		}
	}
	printf("%d",cont/2);

return 0;
}
