#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n==m)
    {
        int a[n];
        int b[n];
         for(int i=0;i<n;i++){
             scanf("%d",&a[i]);
             }
         for(int i=0;i<n;i++){
             scanf("%d",&b[i]);
             }
             int sum1=0;
        int sum2=0;
             for(int i=0;i<n;i++){
                sum1+=a[i];
                  sum2+=b[i];
             }
        if(sum1==sum2){
            printf("Same");
        }    else {
        printf("Not Same");}
        
         }
    else {
        printf("Not Same");}
    return 0;
    
}
