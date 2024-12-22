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
