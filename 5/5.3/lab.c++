#include <stdio.h>
#define SIZE 5
int fold(int v[], int n);
int main(){
    int box[SIZE], i = 0;
    int s = 0;
    float m = 0;
    printf("Input %d values\n", SIZE);
    while (i < SIZE) {
        printf("#%d: ", i + 1);
        if (scanf("%d", box + i) != 1) return 0;
        i++;
    }
    s = fold(box, SIZE);
    m = s * 1.0f / SIZE;
    printf("\n--- ARRAY AVERAGE REPORT ---\n");
    for (i = 0; i < SIZE; i++)
        printf("%d%s", box[i], i == SIZE - 1 ? "\n" : " ");
    printf("Total Sum: %d\n", s);
    printf("Average: %.2f\n", m);
    return s == 0;
}
int fold(int v[], int n){
    int r = 0;
    while (n--)
        r += v[n];
    return r;
}