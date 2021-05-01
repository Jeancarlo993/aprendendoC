#include<stdio.h>

double phi(int numFracoes){
	if(numFracoes==1)
		return 2;
	else
		return 1+(1/phi(numFracoes-1));
}

int main(){
	printf("%.10lf",phi(31));

return 0;
}
