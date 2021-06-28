/*
c7
Given array of n character , print two digit appear the most .

Example
input
8
a b c d n g a b 
output
a
b
*/

#include <stdio.h>
#include <string.h>

int max = 100;
void getArray(char str[], int arr[]);
int undupArray(int a[], int b[], int n);
void mostAppear(int a[], int b[], int size, int n);
int maxValue(int c[], int size);
int main(){
    int n;
    int arr[max], brr[max];
    char str[max];
    scanf("%d", &n);
    getchar();
    fgets(str, sizeof(str), stdin);
    getArray(str,arr);
    int size = undupArray(arr,brr,n);//  a b c d n g a b
    mostAppear(arr,brr,size,n);
}
void getArray(char str[], int arr[]){
    int x = -1;
    int len = strlen(str) - 1;
    for ( int i = 0; i < len; i++)
        if ( str[i] == ' ')
            continue;
        else{
            x++;
            arr[x] = (int)str[i];
        }
}
int undupArray(int a[], int b[], int n){
    int size = n;
    for ( int i = 0; i < size; i++) //    a b c d n g a b
        b[i] = a[i];
    for ( int i = 0; i < size; i++)
        for ( int j = i+1; j < size; j++)
            if ( b[i] == b[j]){
                for ( int z = j; z < size; z++)
                    b[j] = b[j+1];
                size--;
            }
    return size;
}
void mostAppear(int a[], int b[], int size, int n){
    int max = b[0];
    int count = 0;
    int c[size];
    for ( int i = 0; i < size; i++){
        count = 0;
        for ( int j = 0; j < n; j++){
            if ( b[i] == a[j])
                count++;
        }
        c[i] = count;
    }
    int maxVal = maxValue(c, size);
    for ( int i = 0; i < size; i++)
        if ( c[i] == maxVal )
            printf("%c\n", b[i]);
}
int maxValue(int c[], int size){
    int maxVal = c[0];
    for ( int i = 1; i < size; i++)
        if ( maxVal < c[i])
            maxVal = c[i];
    return maxVal;
}

