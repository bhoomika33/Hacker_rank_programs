#include <stdio.h>

int main() {
    int box1, box2, box3;
    scanf("%d%d%d", &box1, &box2, &box3);
    int largest = (box1 > box2 && box1 > box3) ? box1 : (box2 > box3) ? box2 : box3;
    int largestDivisor = largest;
    for (int i = largest; i >= 1; i--) {
    
        if (box1 % i == 0 && box2 % i == 0 && box3 % i == 0) {
            largestDivisor = i;
            break; 
        }
    }
    int treasureBox = (box1 > box2 && box1 < box3) || (box1 < box2 && box1 > box3) ? box1 :
                      (box2 > box1 && box2 < box3) || (box2 < box1 && box2 > box3) ? box2 : box3;

    
    printf("The treasure is in the box which has the number %d\n", treasureBox);
    printf("The code to open the box is %d\n", largestDivisor);

    return 0;
}
