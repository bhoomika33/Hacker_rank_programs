#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int sod(long long int N)
{
    int S=0;
    while(N>0)
    {
        S+=N%10;
        N=N/10;
    }
    return S;    
}
int main() {

    long long int N;
    scanf("%lld",&N);
    int sum=sod(N);
    if(sum>9)
    {
        sum=sod(sum);
    }
    printf("%lld",sum);
    return 0;
}
