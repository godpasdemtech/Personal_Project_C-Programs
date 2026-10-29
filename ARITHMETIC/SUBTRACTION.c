
//PROGRAMME TO TEXT ARITHMETIC OPERATORS SUBTRACTION

#include <stdio.h>

int main() {

    int MathScore;
    int EnglishScore;
    int SUBTRACTION;

    printf("====== PROGRAM TO TEST ARITHMETIC OPERATORS - SUBTRACTION ======\n\n");

    printf(" Enter your Mathematics Score:\n");
    scanf("%d", &MathScore);

    printf("Enter your English Score:\n");
    scanf("%d", &EnglishScore);

    SUBTRACTION = MathScore - EnglishScore;

    printf("\nFINAL RESULT\n");
    printf("================\n");
    printf("Your Result is %d\n", SUBTRACTION);

     getchar();
     getchar();
    return 0;
}