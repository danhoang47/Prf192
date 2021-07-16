#include <stdio.h>

int tinh(int n){
   int sum = 0;
   int giaiThua = 1;
   for ( int i = 1; i <= n; i++){
      giaiThua *= i;
      sum += giaiThua;
   }
   return sum;
}
int main(){
   int n;
   do{
      scanf("%d", &n);
   }while( n >= 13);
   printf("%d", tinh(n));
}
 
