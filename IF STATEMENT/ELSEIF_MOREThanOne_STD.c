// PROGRAM TO TEST MORE THAN ONE ELSE IN AN IF STATEMENT 
#include <stdio.h>
int main() {
    int Score;
    char StudentName[50];
    
   printf(" ======== PROGRAM TO TEST MORE THAN ONE ELSE IN AN IF STATEMENT ========== \n\n"); 
    printf("Tell Your Name \n");
    scanf("%49s", &StudentName);
        
    printf (" Enter your Student Score \n");
    scanf("%d", &Score);
    
    if (Score>=70)
    {
    printf("Your Name is %s", StudentName);
        printf("\nYour Score has GRADE A category \n");
    }
    else if (Score >=60)
   {
       printf("Your Name is %s", StudentName);
    printf("\nYour Score has GRADE B category \n");
   }
    else if (Score >=50)
    {
        printf("Your Name is %s", StudentName);
    printf("\nYour Score has GRADE C category \n");
    }
    else
    {
        printf("Your Name is %s", StudentName);
    printf("\nYour Score is in the FAILED category \n");
    }       
    getchar();
     getchar(); 
     
    return 0;
}

