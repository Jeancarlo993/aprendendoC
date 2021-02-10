#include<stdio.h>
#include<math.h>

int main(){

    float x,y,distxy;               	    //coordenadas x,y e distancia do lançamento até o centro
    float x2=0,y2=0;                        //variáveis que armazenando as coordenadas do lance anterior
    float lanceA=10;                        //distância da jogada anterior até a nova jogada. iniciei em 10 porque 10 é +0 pontos
    int pontos=0;		            //pontuação

    for (int i = 0; i < 10; i++)
    {
        scanf ("%f %f",&x,&y);                //lendo as coordenadas lançadas
        distxy = sqrt(pow(x,2) + pow(y,2));   //calculando a distância até o centro
        if (i>=0)
        {
            lanceA = sqrt(pow(x-x2,2) + pow(y-y2,2));  //distância do lance anterior até o lance atual
        }
        
    //pontuação +10

        if (distxy >= 0 && distxy <= 1)
        {
            pontos = pontos + 10;
            //se o lance anterior foi na faixa de  0 a 1
            if (lanceA >= 0 && lanceA <= 1)
            {
                pontos = pontos + 5;
            }   
            //se o lance anterior foi na faixa de 1 a 2
            if (lanceA > 1 && lanceA <= 2)
            {
                pontos = pontos + 3;
            } 
            //se o lance anterior foi na faixa de 2 a 3
            if (lanceA > 2 && lanceA <= 3)
            {
                pontos = pontos + 2;
            }                          
        }

    //pontuação +6

        if (distxy > 1 && distxy <= 2)
        {
            pontos = pontos + 6;
            //se o lance anterior foi na faixa de  0 a 1
            if (lanceA >= 0 && lanceA <= 1)
            {
                pontos = pontos + 5;
            }   
            //se o lance anterior foi na faixa de 1 a 2
            if (lanceA > 1 && lanceA <= 2)
            {
                pontos = pontos + 3;
            } 
            //se o lance anterior foi na faixa de 2 a 3
            if (lanceA > 2 && lanceA <= 3)
            {
                pontos = pontos + 2;
            }             
  
        }

    //pontuação +4

        if (distxy > 2  && distxy <= 3)
        {
            pontos= pontos + 4;
            //se o lance anterior foi na faixa de  0 a 1
            if (lanceA >= 0 && lanceA <= 1)
            {
                pontos = pontos + 5;
            }   
            //se o lance anterior foi na faixa de 1 a 2
            if (lanceA > 1 && lanceA <= 2)
            {
                pontos = pontos + 3;
            } 
            //se o lance anterior foi na faixa de 2 a 3
            if (lanceA > 2 && lanceA <= 3)
            {
                pontos = pontos + 2;
            }             
          
        }
    //guardando a distancia do lançamento
    
    x2=x;
    y2=y;
    }

    printf("%d",pontos);
    

    return 0;
}

//o problema no momento é na segunda execução do laço, pois o valor de lanceA ainda vai ser o mesmo da distancia