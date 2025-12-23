#include <stdio.h>
int main() {
    int score;
    int countA=0, countB=0, countC=0, countD=0, countF=0;
    while(score != -1) {
        printf("Enter score : ");
        if(scanf("%d", &score) != 1) {
            printf("Error: Invalid input");
            return 1;
        }
        if(score >= 80 && score <= 100){
            countA++;
        } else if(score >= 70 && score < 80){
            countB++;
        } else if(score >= 60 && score < 70){
            countC++;
        } else if(score >= 50 && score < 60){
            countD++;
        } else if(score >= 0 && score < 50){
            countF++;
        } else if(score == -1){
            printf("Grade distribution\n");
            printf("Grade A Count: %d\n", countA);
            printf("Grade B Count: %d\n", countB);
            printf("Grade C Count: %d\n", countC);
            printf("Grade D Count: %d\n", countD);
            printf("Grade F Count: %d\n", countF);
            break;
        }
    }
    return 0;
}