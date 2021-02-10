#include <stdio.h>
#include <math.h>

int main(){
    int a,b,somaA=0,somaB=0;
    scanf("%d %d",&a,&b);
    

    //soma dos divisores próprios de a e b
    for (int i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            somaA = somaA + i;
            printf ("%d +",i);
            
        }
    }
    printf  ("= %d\n",somaA);
    for (int i = 1; i < b; i++)
    {
        if (b%i==0)
        {
            somaB = somaB + i;
            printf ("%d +",i);
        }
    }
    printf  ("= %d\n",somaB);
    //comparando as somas dos divisores
    if (fabs(somaA-b)<=2&&fabs(somaB-a)<=2)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }
    
    return 0;
}