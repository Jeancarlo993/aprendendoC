#include<stdio.h>
#include<stdlib.h>

int potencia(int base, int expoente){
	if(expoente==0)
		return 1;
	else
		return base * potencia(base,expoente-1);

}

int main(){
	int b,e;
	scanf("%d %d",&b,&e);
	printf("%d",potencia(b,e));

return 0;
}

