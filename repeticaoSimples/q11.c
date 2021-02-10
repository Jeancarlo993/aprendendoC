#include<stdio.h>
int main(){
    float renda_mensal;
    int historic;

    printf("Digite a renda mensal: ");
    scanf("%f",&renda_mensal);

    if (renda_mensal>=0&&renda_mensal<700){printf("Resultado: alto risco");}
    else{
        printf("Digite se o histórico de crédito é bom: ");
        scanf("%d",&historic);

        if (renda_mensal>=700&&renda_mensal<3200){
            if (historic==1)
                printf("Resultado: médio risco");
            else 
                printf("Resultado: alto risco");
        }
        
        else {
            if (historic==0)
                printf("Resultado: médio risco");
            else
                printf("Resultado: baixo risco");
        }
    }        


    return 0;
}