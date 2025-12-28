#include <stdio.h>
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int x, y;
    printf("InputNum1: ");
    scanf("%d", &x);
    printf("InputNum2: ");
    scanf("%d", &y);
    printf("\n--- SWAPPING REPORT ---\n");
    printf("Before Swap - Num1: %d, Num2: %d\n", x, y);
    swap(&x, &y);
    printf("After Swap - Num1: %d, Num2: %d\n", x, y);
    return 0;
}