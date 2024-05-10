#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    int i;
    for (i = 0; i <= n; i++) {
        if (isPalindrome(i)) {
            printf("%d,", i);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    return 0;
}



