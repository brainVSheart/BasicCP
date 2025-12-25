#include <stdio.h>
int main(){
    int t[7];
    int m, i;
    for(i = 0; i < 7; i++){
        scanf("%d", &t[i]);
    }
    m = t[0];
    for(i = 1; i < 7; i++){
        if (t[i] > m)
            m = t[i];
    }
    printf("---Daily Temperature Report---");
    printf("\nRecord TEMP(C): ");
    for(i = 0; i < 7; i++){
        printf("%d ", t[i]);
    }
    printf("\n");
    printf("Max TEMP = %d\n", m);
    if(m >= 35)
        printf("HOT\n");
    else
        printf("MODERATE\n");
    return 0;
}