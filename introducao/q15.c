#include <stdio.h>
#include <math.h>

int main(){
    float g = 9.8,v,a,t,x,y;
    printf("Digite a velocidade inicial (m/s): ");
    scanf("%f",&v);
    printf("Digite o angulo inicial (em radianos): ");
    scanf("%f",&a);
    printf("Digite o instante de tempo em segundos (m/s): ");
    scanf("%f",&t);

    x=v*cos(a)*t;
    y=v*sin(a)*t-(g*pow(t,2)/2);

    printf("O objeto está em: %f %f",x,y);

    return 0;


}