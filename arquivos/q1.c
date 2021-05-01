#include<stdio.h>
#include<string.h>

int main(){
	//abrir os arquivos
	FILE * times=fopen("times.txt","r");
	FILE * classific = fopen("classificacao.txt","w");

	//variaveis
	char time[100]; 
	int a,b; 	
	char timA[100],timB[100];

	//checar quantos jogos de um time e sua pontuação
	while(fscanf(times,"%s",time)!=EOF){
		FILE * jogos=fopen("partidas.csv","r");
		int qnt_jogos=0;
		int pontuacao=0;
	
		while(fscanf(jogos,"%s %d %d %s",timA,&a,&b,timB)!=EOF){
			//se for o time A
			if(strcmp(timA,time)==0){
				qnt_jogos++;
				//a venceu
				if(a>b){
					pontuacao+=3;
				}
				//a empatou
				if(a==b){
					pontuacao++;
				}
			}
			//se for o time B
			if(strcmp(timB,time)==0){
				qnt_jogos++;
				if(b>a){
					pontuacao+=3;
				}
				if(a==b){
					pontuacao++;
				}
			}	
		}
		fclose(jogos);
		fprintf(classific,"%s %d %d \n",time,qnt_jogos,pontuacao);
	}
	fclose(times);
	fclose(classific);
return 0;
}
