#include <stdio.h>

int main() {
    int num, square, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    square = num * num;
    while (square > 0) {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }
    if (sum == num) {
        printf("%d is a neon number.", num);
    } else {
        printf("%d is not a neon number.", num);
    }
    return 0;
}
