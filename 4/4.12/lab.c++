#include <stdio.h>
void print_matrix(int rows, int cols, int matrix[][3]) {
    int i, j;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void print_matrix_3x2(int matrix[][2]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void print_matrix_2x2(int matrix[][2]){
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int A[2][3];
    int B[2][3];
    int BT[3][2];
    int C[2][2];
    int i, j, k;
    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);
    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);
    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
            BT[j][i] = B[i][j];
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            C[i][j] = 0;
            for (k = 0; k < 3; k++){
                C[i][j] += A[i][k] * BT[k][j];
            }
        }
    }
    printf("-- MATRIX MULTIPLICATION REPORT --\n\n");
    printf("Matrix A (2x3):\n");
    print_matrix(2, 3, A);
    printf("\nMatrix B (2x3):\n");
    print_matrix(2, 3, B);
    printf("\nMatrix B Transposed (BT, 3x2):\n");
    print_matrix_3x2(BT);
    printf("\nResult Matrix C (A x BT, 2x2):\n");
    print_matrix_2x2(C);
    return 0;
}