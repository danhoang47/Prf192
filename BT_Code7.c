#include <stdio.h>
#include <math.h>
#define TRUE 0
#define FALSE -1

int check(int a[], int size, int x){
   int count = 0;
   for (int i = 0; i < size; i++){
      if ( a[i] == a[x]){
         count++;
      }
   }
   if ( count > 1)
      return FALSE;
   return TRUE;
}
void checkLoop(int a[], int b[], int size, int *p){
   int sizeB = *p;
   for ( int i = 0; i < size; i++){
      if ( check(a,size,i) == TRUE ){
         b[*p] = a[i];
         (*p)++;
      }
   }
   for ( int i = 0; i < *p; i++)
      printf("%d ", b[i]);
}
int main(){
   int size;
   int a[10000], b[10000];
   scanf("%d", &size);
   int sizeB = 0;
   for ( int i = 0; i < size; i++)
      scanf("%d", &a[i]);
   checkLoop(a,b,size,&sizeB);
}


