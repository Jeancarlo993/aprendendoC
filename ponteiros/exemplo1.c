#include<stdio.h>
#include<stdlib.h>
int primo(int x){
	int contador=0;
	while(contador==0){
		for(int i=2;i<x;i++){
			if(x%i==0){
				contador++;
				return 0;
			}
		}
		return 1;
	}

}

int main(){
	int *teste;

	teste=calloc(100,sizeof(int));
	for(int i=0;i<100;i++){
		*(teste+i)=i*2-1;
	}
	for(int i=0;i<100;i++){
		if(primo(*(teste+i))==1){
			printf("%d. %d\n ",i+1,*(teste+i));
		}
	}
	free(teste);	
return 0;
}
