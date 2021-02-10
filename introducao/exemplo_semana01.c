/*exemplo apresentado em uma das vídeo aulas
Disciplina ITP
Semana 01
Jean Carlo Nascimento Aráujo
*/

#include <stdio.h>

int main(){

    int a = 3;
    printf("Valor da variavel a: %d\n", a);     //imprime o valor de a
    printf("Endereco da variavel a: %p\n",&a);  //apresneta o endereço de a na memória
    a = a + 2;                                  //atribui novo valor a 
    printf("Valor da variavel a: %d\n",a);      //imprime novo valor de a

    return 0;
}