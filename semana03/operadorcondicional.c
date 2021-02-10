// condição ? expressao1:expressao2
#include<stdio.h>
main(){
    float salario;
    printf("Salario: "); scanf("%f",&salario);
    salario=salario>1000 ? salario*1.05 : salario*1.07;  //vai avarliar a condição se for verdadeir faz expressao 1 se for falso faz expressao 2
    printf("Seu salário é %f",salario);

}

// a diferença para o if é que o operadr lógico devolve os resultados para a variável