
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 3 && a <= 10) {
        int result = a*a*a*a + (a+3)*(a+3)*(a+3)*(a+3) + (a+6)*(a+6)*(a+6)*(a+6) + (a+9)*(a+9)*(a+9)*(a+9) + (a+12)*(a+12)*(a+12)*(a+12) + (a+15)*(a+15)*(a+15)*(a+15);
        printf("%d\n", result);
    } else {
        printf("error\n");
    }
    return 0;
}



