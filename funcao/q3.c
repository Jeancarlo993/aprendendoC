#include<stdio.h>
#include<math.h>
//calcula a altura em função das coordenadas
float altura(float c1,float c2){
	return sin(cos(c2)+c1)+cos(c2+sin(c1));
}

//verifica se uma altura é segura. 0 para insegura, 1 para segura
int seguro(float x0,float y0){
	float h,p1,p2,p3,p4;
	//calculando altura dos pontos referentes ao tamanho da sonda	
	h=altura(x0,y0);
	p1=altura(x0+0.2,y0+0.2);
	p2=altura(x0-0.2,y0-0.2);
	p3=altura(x0+0.2,y0-0.2);
	p4=altura(x0-0.2,y0+0.2);
	

	//checando se os pontos são seguros		
	if(h<0||h>2||p1<0||p1>2||p2<0||p2>2||p3<0||p3>2||p4<0||p4>2){
		return 0;
		}
	else{
		return 1;
		}

}
//checa quantos pontos são seguros
int pontos_seguros(float a,float b){
	int contador=0;
	
	if(seguro(a+2,b)==1){
		contador ++;
	}
	if(seguro(a-2,b)==1){
		contador ++;
	}
	if(seguro(a,b+2)==1){
		contador ++;
	}
	if(seguro(a,b-2)==1){
		contador ++;
	}	
	
	return contador;
}
int main(){
	float x,y;
	scanf("%f %f",&x,&y);
	
	if(seguro(x,y)==1){ 		          
		if(pontos_seguros(x,y)<=1){	  
			printf("inseguro");	 
		}
		else if(pontos_seguros(x,y)<=3){
			printf("relativamente seguro");
		}
		else{
			printf("seguro");
		}
	}
	else{
		printf("troque de coordenada");
	}

return 0;
}
