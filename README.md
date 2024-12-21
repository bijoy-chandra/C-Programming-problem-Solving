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


### Write a C program to find whether a given year is a leap year or not.

#include <stdio.h>

void main() {

    int Year;

    printf("Enter the year: ");  // Enter the year you want to check
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
    //return 0;
}


## Output

![image](https://github.com/user-attachments/assets/403fdf12-d271-469e-9991-5ed2b16bb41f)


Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.

#include <stdio.h>

void main() {
    
    int m,n;  // In the input section you have to insert two value. First one for m and second one for n. However the value of n will not count as we do not have any condition for n.

    printf("Write your number: ");
    scanf("%d\n", &m);

    if (m > 0) {
        n = 1; // When m is greater than 0 n will be 1
    }
    else if (m == 0){
        n = 0; // When m is equal to 0 n will be 0
    }
    else
        n = -1; // When m is less than 0 n will be -1
        printf("The value of m = %d\n", m);
        printf("The value of n = %d\n", n);
    return 0;
}

## Output

![image](https://github.com/user-attachments/assets/65aaab68-d32c-4c56-9aba-2709b4483810)

![image](https://github.com/user-attachments/assets/639659b8-4ea5-4162-b175-2cf56a70328c)

![image](https://github.com/user-attachments/assets/dd85115b-08bf-4bb6-92d4-b816d9d42fa7)



