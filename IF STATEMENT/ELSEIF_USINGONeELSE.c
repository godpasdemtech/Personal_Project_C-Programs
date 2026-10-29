
// PROGRAM TO TEST ONE ELSE IN AN IF STATEMENT 

#include <stdio.h>

int main() {

    int Score;
    
   printf(" ======== PROGRAM TO TEST ONE ELSE IN AN IF STATEMENT ========== \n\n"); 
    printf (" Enter your Student Score \n");
scanf("%d", &Score);
    
    if (Score>=70)
{
    printf("Your Score has GRADE A category \n");
}
else
{
    printf("Your Score is not in the  GRADE A category \n");
}

getchar();
     getchar(); 

    return 0;
}

