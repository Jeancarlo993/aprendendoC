#include<stdio.h>
int main(){
    int h;
    int m;
    int s;

    scanf("%d %d %d",&h, &m, &s);
    h*=3600;
    m*=60;
    printf("%d",h+m+s);


return 0;
}