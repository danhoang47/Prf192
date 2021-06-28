/*
c8
Given integer N. Check that N is power of 2.
if exist x that 2^x=N print x.
Otherwise Print "N is not power of 2".

Examples
input
8
output
3
input
6
output
6 is not a power of 2
*/
*/

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
