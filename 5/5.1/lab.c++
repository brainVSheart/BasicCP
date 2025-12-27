#include <stdio.h>
int box(int a, int b);
int main(){
    int x = 0, y = 0, z = 0;
    printf("Input Length: ");
    if(scanf("%d", &x) != 1)
    return 0;
    printf("Input Width: ");
    if(scanf("%d", &y) != 1)
    return 0;
    z = box(y, x);
    printf("\nLength %d :Widtth %d\nArea = %d\n", x, y, z);
    return z == 0;
}
int box(int a, int b){
    return (a | b) == 0 ? 0 : a * b;
}