#include <stdio.h>

void main() {

    int Year;

    printf("Enter the year: ");
    scanf("%d", &Year);

    if ((Year % 400) == 0) {
        printf("%d is a leap year\n", Year);
    }
    else if ((Year % 100) == 0) {
        printf("%d is a leap year\n", Year);
    }
    else if ((Year % 4) == 0) {
        printf("%d is a leap year\n", Year);
    }
    else {
        printf("%d is not a leap year", Year);
    }
}
