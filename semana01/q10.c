#include <stdio.h>

int main(){
    int n;

    scanf("%d",&n);
    printf("Resposta: %d",n%3==0&&n%5!=0&&n!=0);


    return 0;
}