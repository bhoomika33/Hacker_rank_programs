#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int m,n;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
     {
        if(i<=99)
           {
               int sum=i%10+i/10;
                int prod=(i%10)*(i/10);
                 if(sum+prod==i)
                 printf("%d\n",i);
           }
    }
       
    return 0;
}
