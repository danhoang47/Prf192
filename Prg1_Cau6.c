#include <stdio.h>
#include <math.h>

void insert(int a[], int size){
    for ( int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}
int sumSub(int a[], int size, int x, int c[]){
    int nC = 0;
    for ( int i = 0; i < size; i++ ){
        if ( a[i] == x)
            return i;
    }
    int sum = 0;
    for ( int i = 0; i < size; i++){
        sum = a[i];
        for ( int j = i+1; j < size; j++){
            if ( sum == x && a[j+1] == 0)
                break;
            sum += a[j];
            if ( sum == x){
                c[nC] = j*10+i;
                nC++; 
                break;
            }
            if ( sum > x)
                break;
        }
        sum = 0;
    }
    return nC;
}
void check(int a[], int size){
    int diff = 0;
    int min = a[0]/10 - a[0]%10;
    int index = 0;
    for(int i = 1; i < size; i++){
        diff = a[i]/10 - a[i]%10;
        if ( min > diff ){
            min = diff;
            index = i;
        }
    }
    printf("%d %d",a[index]%10 + 1, a[index]/10 + 1);
}
int main(){
    int size, x;
    int a[100], c[100];
    scanf("%d%d", &size, &x);
    insert(a,size);
    int nC = sumSub(a,size,x,c);
    if ( a[nC] == x ){
        printf("%d", nC+1);
        return 0;
    }
    else 
        check(c,nC);
}
