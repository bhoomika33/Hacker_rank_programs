#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
    {
        
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        
    }
    }
    }
    printf("The Sorted array is:\n");
     for(int i=0;i<n;i++)
     {
         printf("%d\n",a[i]);
     }
    
    return 0;
}
