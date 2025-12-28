#include <stdio.h>
int main(){
    int score;
    while (1){
        printf("Enter score: ");
        if(scanf("%d", &score) != 1){
            printf("Error\n");
            return 1;
        }
        if(score < 0){
            printf("Exit\n");
            break;
        }
        if(score > 100){
            printf("Grade A\n");
        }else if(score >= 80){
            printf("Grade A\n");
        }else if(score >= 75){
            printf("Grade B+\n");
        }else if(score >= 70){
            printf("Grade B\n");
        }else if(score >= 65){
            printf("Grade C+\n");
        }else if(score >= 60){
            printf("Grade C\n");
        }else if(score >= 55){
            printf("Grade D+\n");
        }else if(score >= 50){
            printf("Grade D\n");
        }else{
            printf("Grade F\n");
        }
    }
    return 0;
}
