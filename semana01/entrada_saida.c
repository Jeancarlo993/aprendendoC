/*
Programa com exemplo de entrada e saída scanf e printf
Disciplina ITP
Semana 01
Jean Carlo Nascimento Aráujo
*/

#include <stdio.h>

main(){
    //printf("especificador de formato,variavel\n");
    //scanf("especificador de formato",&variavel);
    int idade;
    float altura;
    //int teste = 5;
    
    printf("Digite sua idade e altura: ");
    scanf("%d %f", &idade, &altura);
    printf("a sua idade eh: %d\n e a sua altura eh: %.02f",idade,altura);
    
    //printf("mostrar um número como texto %d",(char)teste); <- isso se chama casting

    return 0;
}

/* especificador de formato % 
%d  -> inteiros
%hd -> short int
%ld -> long int
%u  -> unsigned int
%s  -> string
%f  -> float ou double
%.0xf -> x casas decimais de precisão para numeros racionais
*/
//&variavel retorna o endereço da variável na memória