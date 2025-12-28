#include <stdio.h>
#define N 5
int update(int *a, int n, int find, int rep){
    for(int i = 0; i < n; i++){
        if(*(a + i) == find){
            *(a + i) = rep;
            return 1;
        }
    }
    return 0;
}
void show(int a[], int n){
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main(){
    int a[N], f, r, ok;
    printf("Input %d array\n", N);
    for(int i = 0; i < N; i++){
        printf("NUM %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nArray select: ");
    scanf("%d", &f);
    printf("New array input: ");
    scanf("%d", &r);
    printf("\n--- ARRAY UPDATE REPORT ---\n");
    printf("Array BEFORE Update: ");
    show(a, N);
    ok = update(a, N, f, r);
    printf("Array AFTER Update: ");
    show(a, N);
    printf("Status: ");
    if(ok)
        printf("Update SUCCESSFUL\n");
    else
        printf("Update FAILED (Value not found)\n");
    return 0;
}