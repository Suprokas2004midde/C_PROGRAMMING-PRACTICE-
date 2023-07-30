#include <stdio.h>


int main() {
    //Calculate the age of ram and sam.

   int age,sam_age,;
   printf("put the age:");
   scanf("%i", &age );

   printf("Ram's age is:%i \n", age);
   sam_age = (age - 10);
   printf("then sam's age is:%i",sam_age);
   return 0;
}