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


### Write a C program to find the largest of three numbers.

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

## Output

![image](https://github.com/user-attachments/assets/963b9551-63ea-4679-8707-79c722f27df8)


### Write a C program to determine eligibility for admission to a professional course based on the following criteria:
- Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140

#include <stdio.h>

void main () {

    int math,phy,chem;

    printf("Enter the result of each subjects = ");
    scanf("%d %d %d", &math, &phy, &chem);

    printf("Math Result: %d\t, Physics Result: %d\t, Chemistry Result: %d\t\n", math, phy, chem);

    int Total_score = math + phy + chem;

    int Math_phy = math + phy;

    printf("Total Score: %d\n", Total_score);
    printf("Math and physics score: %d\n", Math_phy);

    if (math >= 65 && phy >= 60 && chem >= 55)
        {
        if (Total_score >= 190 && Math_phy >= 140) 
        {
            printf("The candidate is eligible for admission.");
        }
        else {
            printf("The candidate is not eligible for admission.");
        }
    }
    else {
        printf("The candidate is not eligible for admission.");
    }

}

## Output

![image](https://github.com/user-attachments/assets/33be8e55-9a99-4ae4-a49e-b4b9f859d3ef)




