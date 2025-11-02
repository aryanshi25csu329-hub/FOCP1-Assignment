#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b;

        a = a ^ b;

        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = subtract(num1, num2);

    printf("Result of %d - %d = %d\n", num1, num2, result);

    return 0;
}
