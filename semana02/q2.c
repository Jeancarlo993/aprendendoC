#include <stdio.h>
#include <math.h>

int main(){
    
    float xi,yi;        //coordenada inicial
    float teia_max;     //comprimento máximo da teia
    int num_alvos;      //número de alvos em que ele vai lançar a teia
    float xa,ya;        //coordenada do alvo
    
    float dist;         //distância euclidiana
    char sn='S';        //ficará N caso em algum momento uma das coordenadas informadas for maior do que o possível pro miranha
    

    scanf("%f %f",&xi,&yi);     //lendo a coordenada inicial
    scanf("%f",&teia_max);      //lendo o comprimento máximo da teia
    scanf("%d",&num_alvos);     //lendo número de alvos

    for (int i = 0; i < num_alvos; i++)                 //repete de acordo com o número de alvos
    {
        scanf("%f %f",&xa,&ya);                         //lendo coordenada dos alvos
        dist=sqrt(pow(xi-xa,2) + pow(yi-ya,2));         //calculando a distância euclidiana
        if (dist<=teia_max)                             //se a teia chega até o alvo então temos uma nova coordenada para x
        {
            xi=2*xa-xi;                                  //nova coordenada de x
        }
        else                                            //caso distancia seja maior do que o possível pro miranha então a variável sn passa a informar N
        {
            sn='N';
        }
        
    }
    printf("%c",sn);


    return 0;
}