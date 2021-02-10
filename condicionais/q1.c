#include<stdio.h>

int main(){
    float  largura,comprimento,bolso;
    int dobras=0;

    scanf("%f %f %f",&largura,&comprimento,&bolso);

    while (largura>=bolso&&comprimento>=bolso)
    {
        if (largura>comprimento)
        {
            largura = largura/2;
        }
        else
        {
            comprimento=comprimento/2;    
        }
        dobras ++;
    }
    printf("%d",dobras);   

    return 0;
}