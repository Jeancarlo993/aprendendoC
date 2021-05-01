#include<stdio.h>
#include<math.h>

//structs para coordenadas e retangulos
typedef struct Coordenada
	{
		float x,y;
	}COORDENADA;

typedef struct Retangulo
	{
		COORDENADA  superior;
		COORDENADA  inferior;
	}RETANGULO;
//funções para distancia, area, perimetro
float distancia(COORDENADA p0,COORDENADA p1){
	return sqrt((p0.x-p1.x)*(p0.x-p1.x)+(p0.y-p1.y)*(p0.y-p1.y));
}
float area(RETANGULO r){
	return ((r.superior.x)-(r.inferior.x))*((r.superior.y)-(r.inferior.y));
}
float perimetro(RETANGULO r){
	return 2*(((r.superior.x)-(r.inferior.x))+((r.superior.y)-(r.inferior.y)));
}

int main(){
	COORDENADA pa,pb;
	scanf("%f %f",&pa.x,&pa.y);
	scanf("%f %f",&pb.x,&pb.y);
	RETANGULO ret={pa,pb};

	printf("distancia entre pts: %0.2f",distancia(pa,pb));	
	printf("Area do retangulo: %0.2f",area(ret));
	printf("Perimetro: %0.2f",perimetro(ret));
	
	
	return 0;
}
