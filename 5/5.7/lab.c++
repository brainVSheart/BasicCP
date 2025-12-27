#include <stdio.h>
#define SIZE 5
void spin(int a[], int n);
void show(int a[], int n);
int main(){
    int raw[SIZE], snap[SIZE];
    int i = 0;
    printf("Input %d NUM\n", SIZE);
    while (i < SIZE){
        printf("NUM %d: ", i + 1);
        if (scanf("%d", raw + i) != 1) return 0;
        snap[i] = raw[i];
        i++;
    }
    spin(raw, SIZE);
    printf("\n--- ARRAY SORTING REPORT ---\n");
    printf("Original Array: ");
    show(snap, SIZE);
    printf("Sorted Array (Ascending): ");
    show(raw, SIZE);
    return raw[0] > raw[SIZE - 1];
}
void spin(int a[], int n){
    int t;
    while (--n){
        for (int i = 0; i < n; i++){
            if (a[i] > a[i + 1]){
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
}
void show(int a[], int n){
    while (n--)
        printf("%d%s", *a++, n ? " " : "\n");
}