#include <stdio.h>
#include <stdlib.h>

int recursiv(int n){
	n=abs(n);
	if (n/10==0)
		return n;
	else
        	return n%10 + recursiv(n/10);
        
}
int main() {
    int x;
    scanf("%d",&x);
    printf("%d",recursiv(x));
    return 0;
}
