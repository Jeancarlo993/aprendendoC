#include<stdio.h>
void trocar(int var1,int var2){
	int swap=var2;
	var2=var1;
	var1=swap;
}

int main(){
	int n;
	scanf("%d",&n);
	int lc[20][4];
	//preenchendo coluna 0 dos n pilots
	for(int i=1;i<=20;i++){
		lc[i-1][0]=i;
	}
	//leitura na coluna 1 largadas na coluna 2 chegadas 
	for(int i=1;i<=2;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&lc[j][i]);
		}
	}
	//preenchendo coluna 3 com as posições ganhas
	for(int i=0;i<n;i++){
		lc[i][3]=lc[i][1]-lc[i][2];
	}
	//ordenar na ordem de quem ganhou mais posições
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(lc[i][3]>lc[j][3]){
					int swap=lc[j][3];
					lc[j][3]=lc[i][3];
					lc[i][3]=swap;
					
					swap=lc[j][0];
					lc[j][0]=lc[i][0];
					lc[i][0]=swap;				
					
					swap=lc[j][2];
					lc[j][2]=lc[i][2];
					lc[i][2]=swap;	

					swap=lc[j][1];
					lc[j][1]=lc[i][1];
					lc[i][1]=swap;	

			}
		}

	}		
	//output
	int x,y;
	x=lc[0][3];
	y=lc[1][3];

	if(x==y||x==0){
		printf("empate");
	}
	else{
		printf("%d",lc[0][0]);
	}

return 0;
}

