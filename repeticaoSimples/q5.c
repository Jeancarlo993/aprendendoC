#include<stdio.h>
int main(){
    int mes;


    printf("Digite o mês: ");
    scanf("%d",&mes);


    while(mes>12||mes<1)
    {
        printf("Digite o mês: ");
        scanf("%d",&mes);
    }

    switch (mes)
    {
    case 1: printf("30 dias");break;
    case 2: printf("29 dias");break;
    case 3: printf("31 dias");break;
    case 4: printf("30 dias");break;
    case 5: printf("31 dias");break;
    case 6: printf("30 dias");break;
    case 7: printf("31 dias");break;
    case 8: printf("31 dias");break;
    case 9: printf("30 dias");break;
    case 10:printf("31 dias");break;
    case 11:printf("30 dias");break;
    case 12:printf("31 dias");break;
        
    
    default: printf("é um mês no planeta terra, macho");
        break;
    }
    


    return 0;
}