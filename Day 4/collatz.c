#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,count;
    scanf("%d",&n);
    printf("%d\n",n);
    count=0;
    while(n!=1)
   {
       if(n%2==0)
       {
           n=n/2;
           count++;
       }
       else
       {
           n=(3*n)+1;
           count++;
       }
       printf("%d\n",n);
   }
    printf("%d",count);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}