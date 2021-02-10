#include <stdio.h>

int main(){
float n1,n2,n3,m;
char conceito;

scanf("%f %f %f",&n1,&n2,&n3);
m = (n1+n2+n3)/3;

if (m>=9.5){conceito = 'A';}
if (m<=8.5&&m<9.5){conceito = 'B';}
if (m<=7.0&&m<8.5){conceito = 'C';}
if (m<=6.0&&m<7.0){conceito = 'D';}
if (m<6.0){conceito = 'F';}

printf("Conceito: %c",conceito);

return 0;
}