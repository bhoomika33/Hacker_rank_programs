#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int even=0;
    int odd=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
     scanf("%d",&a[i]);   
    }
    for(int i=0;i<n;i++){
    if(a[i]%2==0)
    {
        even=even+a[i];
    }
        else{
            odd=odd+a[i];
    }
    }
    printf("The sum of the even numbers in the array is %d\n",even);
    printf("The sum of the odd numbers in the array is %d\n",odd);
        

       
    return 0;
}
