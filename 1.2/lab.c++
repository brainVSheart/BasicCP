#include <stdio.h>
int main() {
    int score;
    int A=80,BP=75,B=70,CP=65,C=60,DP=55,D=50,F=49;
while (1){
    printf("Enter score:");
    if (scanf("%d", &score) != 1){
        printf("Error\n");
        return 1;
}
if(score>100){
    printf("เก่งเกินเบอร์แต่เธอได้แค่ A");
    }else if(score>=A){
        printf("A\n");
    }else if(score>=BP && score!=A){
        printf("B+\n");
    }else if(score>=B && score!=BP){
        printf("B\n");
    }else if(score>=CP && score!=B){
        printf("C+\n");
    }else if(score>=C && score!=CP){
        printf("C\n");
    }else if(score>=DP && score!=C){
        printf("D+\n");
    }else if(score>=D && score!=DP){
        printf("D\n");
    }else{
        printf("F\n");
    }
    if(score==0){
      break;
    }
}
    return 0;
}