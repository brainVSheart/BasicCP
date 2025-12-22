#include <stdio.h>
int main(){
    int N, sum=0, i;
    while (1){
    printf("Input number :");
    if (scanf("%d", &N) != 1){
        printf("Error\n");
        return 1;
    }
    if (N > 0) {
        for (i=1; i<=N; i++){
            sum+=i;
        }
    }
    printf("All sum :%d\n", sum);
    sum=0;
    if(N<0){
        break;
        return 0;
    }
}
}