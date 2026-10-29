


// C PROGRANNE TO SHOW ARITHMETIC OPERATORS AND AVERAGE 
#include <stdio.h>

int main()
{
    char Name[50];
    int ComputerScore;
    int MathScore;
    int EnglishScore;
    float AVERAGE;

    printf("====== PROGRAM TO TEST ARITHMETIC OPERATORS AND AVERAGE ======\n\n");

    printf("Enter your name: \n");
    scanf("%49s", &Name);

    printf("Enter your Computer Score: \n");
    scanf("%d", &ComputerScore);

    printf("Enter your Mathematics Score: \n");
    scanf("%d", &MathScore);

    printf("Enter your English Score: \n");
    scanf("%d", &EnglishScore);

    AVERAGE = (MathScore + EnglishScore + ComputerScore) / 3.0;

    printf("\n===== FINAL RESULT =====\n");
    printf("Student Name: %s\n", Name);
    printf("Your Average Score is: %.2f\n", AVERAGE);

    getchar();
     getchar();
    return 0;
}

