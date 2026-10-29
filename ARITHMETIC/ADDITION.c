

// PROGRAM TO TEST ARITHMETIC OPERATORS - ADDITION

#include <stdio.h>

int main() {

    int MathScore;
    int EnglishScore;
    int SUM;

    printf("   ====== PROGRAM TO TEST ARITHMETIC OPERATORS ======\n");

    printf("   Enter your Mathematics Score:\n");
    scanf("   %d", &MathScore);

    printf("   Enter your English Score:\n");
    scanf("   %d", &EnglishScore);

    SUM = MathScore + EnglishScore;

    printf(   "\nFINAL RESULT\n");
    printf("    ================\n");
    printf("    Your Result is %d\n", SUM);

    getchar();
     getchar(); 
    return 0;
}
