#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    long square = (long)num * num;
    int digits = 0;
    int temp = num;

    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    int kaprekar = 0;
    for (int i = 1; i <= digits; i++) {
        int divisor = 1;
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }
        int right = square % divisor;
        int left = square / divisor;
        if (right != 0 && left + right == num) {
            kaprekar = 1; 
            break;
        }
    }

    if (kaprekar)
    {
        printf("Kaprekar Number\n");
    } 
    else {
        printf("Not a Kaprekar Number\n");
    }
    return 0;
}
