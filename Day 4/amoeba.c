#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int n,a=0,b=1,c,i=2;
    scanf("%d",&n);
    while(i<n)
        {
        c=a+b;
        a=b;
        b=c;
        i++;
        }
    printf("%d",c);
    return 0;
    
}