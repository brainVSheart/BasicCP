#include <stdio.h>
void calc(int a, int b, int *s, int *p){
    *s = a + b;
    *p = a * b;
}
int main(){
    int a, b, sum, prod;
    printf("Enter first integer (Val A): ");
    scanf("%d", &a);
    printf("Enter second integer (Val B): ");
    scanf("%d", &b);
    calc(a, b, &sum, &prod);
    printf("\n--- CALCULATION REPORT ---\n");
    printf("Input Values: A = %d, B = %d\n", a, b);
    printf("----------------------------\n");
    printf("Result Sum (A + B): %d\n", sum);
    printf("Result Product (A * B): %d\n", prod);
    return 0;
}