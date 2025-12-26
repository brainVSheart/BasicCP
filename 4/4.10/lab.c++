#include <stdio.h>
int main(){
    int data[3][3];
    int i, j;
    printf("Enter 9 integer numbers for the 3x3 array\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Enter element for Row %d, Col %d: ", i, j);
            scanf("%d", &data[i][j]);
        }
    }
    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size: 3 Rows x 3 Columns\n");
    printf("Content (Table Format):\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
    return 0;
}