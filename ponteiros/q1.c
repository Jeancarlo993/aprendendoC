#include<stdio.h>
#include<stdlib.h>

int *somaVetores(int *v1,int *v2,int tam) {
	int *somado=malloc(tam*sizeof(int));
	for(int i=0;i<tam;i++){
		somado[i]=*(v1+i)+*(v2+i);
	}
	return somado;
}


int main(){
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	if(n1!=n2){
		printf("dimensoes incompativeis");
		return 0;
	}

	int *u = malloc(n1*sizeof(int));
	int *v = malloc(n2*sizeof(int));

	for(int i=0;i<n1;i++){
		scanf("%d",(u+i));
	}
	for(int i=0;i<n2;i++){
		scanf("%d",(v+i));
	}
	
	int *somados=somaVetores(u,v,n1);
	
	for(int i=0;i<n1;i++){
		printf("%d ",somados[i]);
	}
return 0;
}
