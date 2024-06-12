#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m;
    scanf("%d",&m);
     int n = m;
    int sum = 0;
    while(n!=0){
        int t = n%10;
        int fact = 1;
        int i =1;
        while(i<=t){
            fact = fact*i;
            i++;
        }
        sum = sum+fact;
        n = n/10;
    }
    if(sum == m){
        printf("Yes");
    }
    else{
        printf("No");
    }
     return 0;
}


   


   
