#include <stdio.h>
int main(){
    int n, x;
    if(scanf("%d", &n) != 1)
    return 0;
    int a[n];
    x = 0;
    while(x < n){
        scanf("%d", &a[x]);
        x++;
    }
    printf("---Output---\n");
    for(x = n; x > 0; x--){
        printf("%d\n", a[x - 1]);
    }
    return 0;
}