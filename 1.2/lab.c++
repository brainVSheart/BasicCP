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
        printf("Grade A\n");
    }else if(score>=BP && score!=A){
        printf("Grade B+\n");
    }else if(score>=B && score!=BP){
        printf("Grade B\n");
    }else if(score>=CP && score!=B){
        printf("Grade C+\n");
    }else if(score>=C && score!=CP){
        printf("Grade C\n");
    }else if(score>=DP && score!=C){
        printf("Grade D+\n");
    }else if(score>=D && score!=DP){
        printf("Grade D\n");
    }else if(score<=F && score>=0){
        printf("Grade F\n");
    }
    if(score<0){
        printf("Exit\n");
      break;
    }
}
    return 0;
}
