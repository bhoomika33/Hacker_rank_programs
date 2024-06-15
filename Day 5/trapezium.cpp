#include <iostream>
int main() {
    
    int n; 
    std::cin >> n;
    int a = 1, b = n * n + 1;

for (int i = n; i >= 1; i--) {
    for (int h = 0; h < n - i; h++)
        std::cout << "--";
    for (int j = 0; j < i; j++) {
        std::cout << a++ << "*";
    }
    for (int k = 0; k < i - 1; k++) {
        std::cout << b++ << "*";
    }
    std::cout << b << std::endl;
    b = b - 2 * (i - 1);
}
return 0; }