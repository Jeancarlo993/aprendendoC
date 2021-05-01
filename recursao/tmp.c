#include<stdio.h>
#include<stdlib.h>

int numeroOcorrenciasVetor(int *v, int n, int x){
	
	if(n==0)
		if(v[0]==x)
			return 1;
		else
			return 0;
	else
		return (v[n]==x)+numeroOcorrenciasVetor(v,n-1,x);  
}

int main(){
	int *v,n,x;
	scanf("%d",&n);

	v= malloc(n*sizeof(int));	
	for(int i=0;i<n;i++){
		scanf("%d",v+i);
	}
	scanf("%d",&x);
	printf("%d",numeroOcorrenciasVetor(v,n,x));
return 0;
}
