/*
Bloco if-else
Disciplina ITP
Semana 02
Jean Carlo Nascimento Aráujo
*/

/* Pela sintaxe da instrução if-else, apenas uma instrução pode seguir o if ou o else
caso se deseje que um conjunto de instruções seja realizado, quer no if quer no else, 
estas devem ser escritas entre {} de forma que este conjutno de instruções forme um 
único bloco de instruções*/
#include <stdio.h>
main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b)
        if(a>b)
            printf("a é maior que b");
        else    
            printf("a é igual a b");
    else
        printf("a é menor que b");

}
