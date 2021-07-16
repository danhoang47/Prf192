#include <stdio.h>

int tinhSoTo(int *amount, int menhGia){
   int soTo = 0;
   if ( *amount >= menhGia){
      soTo = *amount/menhGia;
      *amount =  *amount -(soTo*menhGia);
      return soTo;
   }
   return 0;
}
int main()
{
   int amount;
   int soTo = 0;
   scanf("%d", &amount);
   printf("%dk    %d\n", 500,tinhSoTo(&amount,500));
   printf("%dk    %d\n", 200,tinhSoTo(&amount,200));
   printf("%dk    %d\n", 100,tinhSoTo(&amount,100));
   printf("%dk    %d", 50,tinhSoTo(&amount,50));
   return 0;   
}
