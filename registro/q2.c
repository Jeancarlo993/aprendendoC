#include<stdio.h>
enum formato_da_hora {FMT_12H,FMT_24H}
typedef struct Horario
	{
		int horas,minutos,segundos;
	}HORARIO;
HORARIO obterMeioDia(){
	HORARIO t={12,0,0};
	return t;
}
HORARIO obterMeiaNoite(){
	HORARIO t={0,0,0};
	return t;
}
HORARIO criarHorario(int h, int m, int s){
	if(h>23||h<0){
		return obterMeiaNoite();
	}
	if(m>59||m<0){
		return obterMeiaNoite();
	}
	if(s>59||s<0){
		return obterMeiaNoite();
	}
	HORARIO t={h,m,s};
	return t;
}
void printHorario(HORARIO x, int fmt){
	if(fmt==FMT_24H){
		printf("%00d:%00d:%00d",x.horas,x.minutos,x.segundos);
	}
	if(fmt==FMT_12H){

		if(x.horas>=0&&x.horas<12){
			printf("%00d:%00d:%00d AM",x.horas,x.minutos,x.segundos);
		}
		if(x.horas==12){
			printf("%00d:%00d:%00d PM",x.horas,x.minutos,x.segundos);
		}
		if(x.horas>12&&x.horas<24){
			x.horas=x.horas-12;
			printf("%00d:%00d:%00d PM",x.horas,x.minutos,x.segundos);
		}
	}
}
void avancarSegundo(HORARIO *ptr){


}
//void avancarMinuto(HORARIO *ptr){}
//Horario extrairHorario(char palavra[]){}

int main(){
	HORARIO tempo=obterMeioDia();
	printf("%d",tempo.horas);

	


return 0;
}
