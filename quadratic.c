#include <stdio.h>
#include <math.h>

void main() {

    int a, b, c, d;
    float x1, x2;

    printf("Enter the value of a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d == 0) {
        printf("Both roots are equal\n");
        x1 = -b / (2.0 * a);
        x2 = x1;
        printf("First root Root 1= %.2f\n", x1);
        printf("Second root Root 2= %.2f\n", x2);
    }
    else if(d > 0) {
        printf("Both roots are real and different.\n");
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        printf("First root Root 1= %.2f\n", x1);
        printf("Second root Root 2: %.2f\n", x2);
    }
    else {
        printf("Roots are imaginary;\nNo Solution. \n");
    }
}
