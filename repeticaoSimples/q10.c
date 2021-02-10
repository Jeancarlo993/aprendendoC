#include <stdio.h>
int main(){
    int l1,l2,l3;
    scanf("%d %d %d",&l1,&l2,&l3);

    if (l1<l2+l3&&l2<l1+l3&&l3<l1+l2)
        {
        printf("Existe\n");
        if (l1==l2&&l2==l3) //3 lados iguais
            printf("Classificação: equilátero");
        else
            if (l1==l2||l2==l3||l3==l1)
                printf("Classificação: isósceles");
            else
                if (l1!=l2&&l2!=l3&&l3!=l1)
                    printf("Classificação: escaleno");
        }
    else {printf("Não existe");}
    
return 0;
}
