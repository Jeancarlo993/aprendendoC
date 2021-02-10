#include<stdio.h>
#include<math.h>

int main() {

    float a,b,c,d,e;
    scanf("%f %f %f %f",&a,&b,&c,&d);

    e= sqrt(pow(a-b,2)+pow(c-d,2));
    printf("%.2f\n",pow(a-b,2));
    printf("%.2f\n",pow(c-d,2));

    printf("%.2f\n", e);

}