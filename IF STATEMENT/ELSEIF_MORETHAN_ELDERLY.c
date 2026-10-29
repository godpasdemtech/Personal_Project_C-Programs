// Online C Programme to display user name and age.
#include <stdio.h>

int main() {
        char Username[60];
        int UserAge;
    
 printf(" ======== PROGRAM TO TEST MORE THAN ONE ELSE IN AN IF STATEMENT ========== \n\n"); 
 printf("Tell us your Username \n");
 scanf("%59s", &Username);

 printf("Enter your UserAge\n");
 scanf("%d", &UserAge);
    if (UserAge >=50)
    {
 printf("your Username is %s", Username);
 printf("\n YOU'RE AN ELDERLY PERSON ACCESS GRANTED AND 50 PERCENT DISCOUNT \n");
    }
      else if (UserAge >=30)
      {
 printf("your Username is %s", Username);
 printf("\n YOU'RE A WORKING CLASS PERSON ACCESS GRANTED AND 20 PERCENT DISCOUNT \n");
      }
    else if (UserAge >=18)
    {
 printf("your Username is %s", Username);
 printf("\n YOU'RE A YOUNG PERSON ACCESS GRANTED AND 10 PERCENT DISCOUNT \n");
    }
    else 
        {
         printf("your Username is %s", Username);
        printf("\n YOU'RE NOT QUALIFIED TO PARTAKE IN THE SHOW ACCESS DENIED \n");
        }
     getchar();
     getchar();
    return 0;
}