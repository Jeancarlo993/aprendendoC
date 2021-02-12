#include<stdio.h>
int primo(int x){
	int retorno=1;
	for(int j=2;j<x;j++){
		if(x%j==0){
			retorno=0;
		}
	 }
	return retorno;
}

int main(){
	for(int i=3;i<50000;i++){
		if(primo(i)==1&&primo(i+2)==1&&primo(i+6)==1){
			printf("(%d, %d, %d)\n",i,i+2,i+6);
		}
	}


return 0;
}
