#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 10000
void readNumbers(int* numbers, int size)
{
    for(int I = 0; I < size; I++)
    {
        scanf("%d",&numbers[I]);
    }
}
void printNumbers(int* numbers, int size)
{
    for(int I = 0; I < size; I++)
    {
        printf("%d\n",numbers[I]);
    }
}
void removeDuplicates(int* numbers, int* size)
{
    for(int I = 0; I < (*size); I++)
    {  
        for(int J = I + 1; J < (*size); J++)
        { 
            if(numbers[J] == numbers[I])
            {
                for(int K=J+1; K < (*size); K++) 
                { 
                    numbers[K-1] = numbers[K];
                }
                (*size)--;
                J--;
            }
        }
    }
}
int main() {
    int numbers[MAX_SIZE], size;
    scanf("%d",&size);
    readNumbers(numbers,size);
    removeDuplicates(numbers,&size);
    printNumbers(numbers,size);
    return 0;
}