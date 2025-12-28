#include <stdio.h>
void inc(int *n){
    *n += 10;
}
int main(){
    int x;
    printf("Enter initial integer value: ");
    scanf("%d", &x);
    printf("\n--- POINTER MODIFICATION REPORT ---\n");
    printf("1. Value BEFORE function call: %d\n", x);
    inc(&x);
    printf("2. Value AFTER function call: %d\n", x);
    return 0;
}