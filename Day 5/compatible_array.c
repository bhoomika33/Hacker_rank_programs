#include <stdio.h>

int main() {
    int comp = 0;
    int n1, n2;
    scanf("%d", &n1);

    int arr1[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    scanf("%d", &n2);

    int arr2[n2];
    for (int j = 0; j < n2; j++)
        scanf("%d", &arr2[j]);

    if (n1 == n2) {
        for (int i = 0; i < n1; i++) {
            if (arr1[i] >= arr2[i]) {
                comp = 1;
            } else {
                comp = 0;
                break;
            }
        }
    }
    if (comp == 1)
        printf("Compatible\n");
    else
        printf("Incompatible\n");

    return 0;
}
