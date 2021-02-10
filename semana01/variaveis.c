/*
Este programa é um estudo dos tipos de variáveis
Disciplina ITP
Semana 01
Jean Carlo Nascimento Aráujo
*/

#include <stdio.h>
#include <math.h>

main() {

    int numero_inteiro=22;                      //pode ter ou 2 ou 4 bytes
    long int numero_inteiro_longo=200000;       //usando o prefixo long garantimos que a variávei tem 4 bytes
    short int numero_inteiro_curto=32760;       //ussando o prefixo short garantimos que a variável tem 2 bytes
    unsigned int numero_inteiro_positivo=60000; //usando o unsigned garantimos que todos os bytes dessa variável sejam usados pra valores positivos
    float numero_racional=15.5;                 //tem 4 bytes
    double numero_racional_maior=M_PI;          //tem 8 bytes
    char caractere='a';                         //um único byte

    return 0;

}

/* 
1 byte     -128 até 127
2 bytes    -32769 até 32767
4 bytes    -2147483648 até 2147483647
*/