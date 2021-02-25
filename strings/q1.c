#include<stdio.h>
#include<string.h>

int main(){
	char campo[20];
	int x;
	int cont=0;
	scanf("%s %d",campo,&x);
	if(campo[x]=='x'){
		printf("bum!");
	}
	else{
		for(int i=x-1;i<=x+1;i++){
			if(campo[i]=='x'){
				cont++;
			}
		}
		printf("%d",cont);
	}
return 0;
}
