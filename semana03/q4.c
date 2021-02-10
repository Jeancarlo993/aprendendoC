#include<stdio.h>
int main() {
    int pontos,partidas,pontos_min;

    printf("Quantos pontos possui o time: ");
    scanf("%d",&pontos);
    printf("Quantas partidas restam: ");
    scanf("%d",&partidas);
    printf("Quantas pontos minimos: ");
    scanf("%d",&pontos_min);

    if (pontos > pontos_min)
        printf("O time já está classificado");
    else
        if(partidas*3+pontos>=pontos_min)
            printf("É possível se classificar");
        else
            printf("Não é possível se classificar");
        
    return 0;
}