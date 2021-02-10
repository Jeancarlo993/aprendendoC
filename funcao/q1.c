#include <stdio.h> 

//função que transforma hora em minuto e  escreve a hora no estilo 24
	void MinutoHora24(int min){
		//se tivermos mais de 23 horas vamos diminuir	
		if(min>1439){
			min=min-1440;	
			printf("%02d:%02d\n",min/60,min%60);
		}
		else{
		printf("%02d:%02d\n",min/60,min%60);
		}
	}

//função que transforma hora em minuto e escreve a hora no estilo 12
	void MinutoHora12(int min){
		if(min>=1440){
			min=min-1440;
		}
		if(min<720){
			if(min/60==0){
				printf("12:%02d AM\n",min%60);
			}
			else{
				printf("%02d:%02d AM\n",min/60,min%60);
			}
		}
		else if(min>=720&&min<1440){
			min=min-720;
			if(min/60==0){
				printf("12:%02d PM\n",min%60);
			}
			else{
				printf("%02d:%02d PM\n",min/60,min%60);
			}
		}
	}
	
//função que escreve as rondas 
	void rondas(int min,int e){
		//24 horas
		if(e==0){
			MinutoHora24(min);
			MinutoHora24(min+60);
			MinutoHora24(min+130);
			MinutoHora24(min+280);
			MinutoHora24(min+725);		
		}
		//12 horas
		else {
			MinutoHora12(min);
			MinutoHora12(min+60);
			MinutoHora12(min+130);
			MinutoHora12(min+280);
			MinutoHora12(min+725);
		}	
	}

int main(){
	//entrada de dados
	int hora,minuto,estilo;
	scanf("%d %d %d",&hora,&minuto,&estilo);
	//transformando horas em minutos
	int totalMin=hora*60+minuto;
	//saida de dados
	rondas(totalMin,estilo);
return 0;
}
