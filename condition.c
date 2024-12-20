//Write a C program to accept two integers and check whether they are equal or not.
#include <stdio.h>

int main() {
    int A, B;

    printf("Enter the value of A and B =");
    scanf("%d %d", &A, &B);

    if (A == B) {
        printf("The value of A and B are same.");
    }
    else if (A > B) {
        printf("A is greater than B.");
    }
    else {
        printf("B is greater than A.");
    }
    return 0;
}

