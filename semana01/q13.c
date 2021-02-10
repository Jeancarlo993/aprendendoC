#include <stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    printf("Resposta: %d",A==B+C||B==A+C||C==B+A);

    return 0;
}