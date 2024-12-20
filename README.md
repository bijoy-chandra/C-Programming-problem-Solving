# C-Programming-problem-Solving

### Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.

#include <stdio.h>

int main() {

    int x = 0;
    printf("Print Number 0 to 10:\n");
    while (x <= 10) {
        printf("%d\t", x);
        x++;
    }
    printf("\n");

    x = 10;  // Resetting the value of i
    printf("Print Number 10 to 0:\n");
    while (x >= 0) {
        printf("%d\t", x);
        x--;
    }
    printf("\n");
    return 0;
}

## Output

![image](https://github.com/user-attachments/assets/5b6552d3-aea3-4fce-882a-de063a8fe4b8)


