#include <stdio.h>
#include <math.h>

void insert(int a[], int size){
    for ( int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}
int checkPrettyArray(int a[], int size){
    if ( a[1] < a[0])
        return 0;
    for ( int i = 0; i < size-1; i++){
        if ( a[i] + a[i+1] <= a[i+2]) //  1 2 3 4 5 6
            continue;
        else 
            return 0;
    }
    return 1;
}
int main(){
    int nA;
    int a[100];
    printf("Insert size of array :"); 
    scanf("%d", &nA);
    insert(a,nA);
    int result = checkPrettyArray(a,nA);
    if ( result == 0)
        printf("FALSE");
    else
        printf("TRUE");
}
