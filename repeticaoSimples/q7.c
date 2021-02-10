#include<stdio.h>
int main(){
    int a,b,c,d,maior;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if (a>b&&a>c&&a>d){maior=a;}
    if (b>a&&b>c&&b>d){maior=b;}
    if (c>b&&c>a&&c>d){maior=c;}
    if (d>b&&d>c&&d>a){maior=d;}
        

    printf("Maior: %d",maior);


}