#include <stdio.h>

int main() {
    int n, pos, num, i;
    scanf("%d", &n);
    int arr[n+1];   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &pos, &num);
    if (pos > n || pos < 1) {
        printf("Invalid Input\n");
        return 0;
    }
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = num;
    printf("Array after insertion is\n");
    for (i = 0; i <= n; i++) {
        printf("%d\n", arr[i]);
    }
     return 0;
}
