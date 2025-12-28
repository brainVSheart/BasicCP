#include <stdio.h>
#define N 3
int main(){
    int a[N], *p, i;
    printf("Input %d NUM array\n", N);
    for(i = 0; i < N; i++){
        printf("Num %d: ", i+1);
        scanf("%d", &a[i]);
    }
    p = a;
    printf("\n--- ARRAY AND POINTER REPORT ---\n");
    printf("Index | Value (Direct) | Value (via Pointer) | Address\n");
    printf("------------------------------------------------------\n");
    for(i = 0; i < N; i++){
        printf("%d | %14d | %19d | %p\n",
               i, a[i], *(p + i), (p + i));
    }
    return 0;
}