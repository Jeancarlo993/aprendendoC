#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void trocastring(char v[],int a,int b){
	char temp[30];
	//a vai passar pra b e b vai passar pra a 
	strcpy(temp,v[a]);
	strcpy(v[b],v[a]);
	strcpy(temp,v[b]);

}

char meses[][30] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

int main() {
	int chuva[30];

	for(int i=0;i<12;i++){
		scanf("%d",&chuva[i]);
	}

	for(int i=0;i<12;i++){
		int contador=0;
		for(int j=0;j<12;j++){
			if(chuva[i]>chuva[j]){
				//ordenar chuva
				int swap=chuva[j];
				chuva[j]=chuva[i];
				chuva[i]=swap;
				//ordernar meses
				char trocas[30];
				strcpy(trocas,meses[j]);
				strcpy(meses[j],meses[i]);
				strcpy(meses[i],trocas);
		
			}
		}
	}	

	for(int i=0;i<12;i++){
		printf("%s %d\n",meses[i],chuva[i]);
	}
	return 0;
}
