/*
Operadores relacionais
Disciplina ITP
Semana 02
Jean Carlo Nascimento Aráujo
*/

//C possui apenas int,float,char e double, ou seja, não possui boolean. Por isso para valores lógicos teremos 0 ou 1.

/************************
operadores relacionais:
== igualdade
>  maior que
>= maior ou igual que
<  menor que
<= menor ou igual que
!= diferente de
************************/

#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d"\n,x==y);
    printf("%d"\n,x>y);
    printf("%d"\n,x<y);
    printf("%d",x!=y);

return 0;
}