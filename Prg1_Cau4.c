#include <stdio.h>
#include <math.h>

void insert(int a[], int size){
    for ( int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}
void creat(int big, int a[], int small, int b[], int c[], int *size){
    int count = 0;
    for ( int i = 0; i < big; i++){
        count = 0;
        for ( int j = 0; j < small; j++){
            if ( a[i] == b[j])
                count++;
        }
        if ( count == 0){
            c[*size] = a[i];
            *size = *size+1;
        }
    }
}
void print(int c[], int size){
    for ( int i = 0; i < size; i++)
        printf("%d ", c[i]);
}
int main(){
    int nA, nB;
    int sizeC = 0;
    int a[100], b[100], c[100];
    printf("Insert size of a and b :"); 
    scanf("%d%d", &nA,&nB);
    insert(a,nA);
    insert(b,nB);
    creat(nA,a,nB,b,c,&sizeC);
    creat(nB,b,nA,a,c,&sizeC);
    print(c,sizeC);
}
