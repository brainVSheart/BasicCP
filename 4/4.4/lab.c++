#include <stdio.h>
int main(){
    int n[5];
    int even = 0, odd = 0;
    int i;
    for(i = 0; i < 5; i++){
        scanf("%d", &n[i]);
        if (n[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("---Number Classification Report---\n");
    printf("Recorded NUM: ");
    for(i = 0; i < 5; i++){
        printf("%d ", n[i]);
    }
    printf("\nTotal Even NUM = %d\n", even);
    printf("Total Odd  NUM = %d\n", odd);
    return 0;
}