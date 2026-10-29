

// C PROGRAMME USING MODULOS FOR USER INPUT
#include <stdio.h>

int main()
{

int FirstNumber;
int SecondNumber;
int MODULOS;


printf ("PROGRAM TO SHOW MODULUS \n\n");

printf (" Enter a FirstNumber: \n");
scanf("%d", &FirstNumber);
printf(" Enter a SecondNumber: \n ");
scanf("%d", &SecondNumber);    

MODULOS = FirstNumber % SecondNumber;

printf("=== FINAL RESULT ===\n");

printf("Modulos Result is %d\n", MODULOS);


 getchar();
     getchar();
     
       return 0;
}

