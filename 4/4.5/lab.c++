#include <stdio.h>
int main(){
    int a[6];
    int sum = 0;
    int i;
    for(i = 0; i < 6; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("---Sumination Report---\n");
    printf("Recorded NUM  : ");
    for(i = 0; i < 6; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Total SUM NUM = %d\n", sum);
    return 0;
}