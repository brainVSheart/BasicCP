#include <stdio.h>
int main(){
    int termCode;
    float amout;
    float aprRate = 0.0;
    float totalInterrest = 0.0;
    printf("Input Term Code (1, 2, 3): ");
    if(scanf("%d", &termCode) != 1 || termCode < 1 || termCode > 3){
        printf("Invalid input\n");
        return 1;
    }
    printf("Input Amount: ");
    if(scanf("%f", &amout) != 1 || amout <= 0){
        printf("Invalid amount\n");
        return 1;
    }else if(termCode == 1){
        if(amout < 5000) {
            aprRate = 0.03;
        } else {
            aprRate = 0.04;
        }
    }else if(termCode == 2){
        if(amout < 10000) {
            aprRate = 0.05;
        } else {
            aprRate = 0.065;
        }
    }else if(termCode == 3){
        aprRate = 0.08;
    }else{
        printf("Invalid Term Code\n");
        return 1;
    }
    if(termCode >= 1 && termCode <= 3){
        totalInterrest = amout * aprRate;
        printf("Total Interest: %.2f\n", totalInterrest);
    }else{
        printf("Invalid Term Code\n");
    }
    return 0;
}