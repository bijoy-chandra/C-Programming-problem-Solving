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
