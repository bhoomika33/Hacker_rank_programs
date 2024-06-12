#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    // Special cases: negative numbers and numbers ending with 0 (except 0 itself)
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // If the number of digits is odd, we can ignore the middle digit
    return x == reversed || x == reversed / 10;
}