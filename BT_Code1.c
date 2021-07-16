#include <stdio.h>

int main()
{
   float part, middle, final;
   char c;
   scanf("%f%f%f", &part, &middle, &final);
   
   float avg = part*0.1+ middle*0.3 + final*0.6;
   if ( avg >= 8.5 && avg <= 10.0)
      c = 'A';
   else if ( avg >= 7.0 && avg < 8.5)
      c = 'B';
   else if ( avg < 7.0 && avg >= 5.5)
      c = 'C';
   else if ( avg < 5.5 && avg >= 4.0)
      c = 'D';
   else 
      c = 'F';
   printf("\nAvarage point : %0.2f , rank : %c", avg, c);
}
 
