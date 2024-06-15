#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int p1 = 0, p2 = n - 1;

    while (p1 < p2) {
        while (arr[p1] % 2 == 0 && p1 < p2)
            p1++;

        while (arr[p2] % 2 != 0 && p1 < p2)
            p2--;

        if (p1 < p2) {
            int temp = arr[p1];
            arr[p1] = arr[p2];
            arr[p2] = temp;
            p1++;
            p2--;
        }
    }

    printf("Array after Segregation\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
