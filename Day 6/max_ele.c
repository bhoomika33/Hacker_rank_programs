#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int j=0;j<m;j++)
     {   
    int max=a[0][j];
        for(int i=1;i<n;i++)
        {
           
             if(a[i][j]>max)
             {
                 max=a[i][j];
             }
        }
         printf("%d\n",max);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
