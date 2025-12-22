#include <stdio.h>
int main() {
    int N, i;
    while (1){
        printf("Enter rounds:");
        if (scanf("%d", &N) != 1) {
          printf("Error\n");
            return 1;
        }
        if(N==0){
            printf("Error\n");
            break;
        }
            if (N>0){
                for(i=0;i<N;i++){
                printf("Hello Loop\n");
                }
            }else{
                printf("Error\n");
            }
    }
   return 0;
}