#include <stdio.h>

void main() {

	int value1, value2, value3;

	printf("Enter the Value: ");
	scanf("%d %d %d", &value1, &value2, &value3);

	printf("1st Number: %d\t, 2nd Number: %d\t, 3rd Number %d\t\n", value1, value2, value3);

	if(value1 > value2) {
        if (value1 > value3) {
            printf("The 1st Number is the greatest among three\n");
        }
        else {
            printf("The 3rd Number is the greatest among three\n");
        }
	}
	else if (value2 > value3) {
		printf("The 2nd Number is the greatest among three\n");
	}
	else {
		printf("The 3rd Number is greatest among three\n");
	}
}
