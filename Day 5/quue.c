#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int groups[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &groups[i]);
    }
    
    int buses = 0;
    int peopleOnBus = 0;
    
    for (int i = 0; i < n; i++) {
        if (peopleOnBus + groups[i] > m) {
            buses++;
            peopleOnBus = 0;
        }
        peopleOnBus += groups[i];
    }
    if (peopleOnBus > 0) {
        buses++;
    }
    
    printf("%d\n", buses);
    
    return 0;
}
