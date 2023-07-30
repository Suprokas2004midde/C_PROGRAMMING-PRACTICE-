#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    switch (a) {
        case 0 ... 39:
            printf("Grade-F");
            break;
        case 40 ... 49:
            printf("Grade-D");
            break;
        case 50 ... 59:
            printf("Grade-C");
            break;
        case 60 ... 69:
            printf("Grade-B");
            break;
        case 70 ... 79:
            printf("Grade-A");
            break;
        case 80 ... 89:
            printf("Grade-E");
            break;
        case 90 ... 100:
            printf("Grade-A");
            break;
        default:
            printf("Input error...");
            break;
    }

    return 0;
}

