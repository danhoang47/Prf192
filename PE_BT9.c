#include <stdio.h>
#include <math.h>

int checkPowerofTwo(int n){
  for ( int i = 0; i <= n/2; i++)
    if ( pow(2.0, i*1.0) == n )
        return i;
  return 0;
}
int main(){
  int n;
  scanf("%d", &n);
  int result = checkPowerofTwo(n);
  if ( result != 0 )
      printf("%d", result);
  else 
      printf("%d is not a power of two");
}
