#include <stdio.h>
int main(){
    int x = 0;
    float money = 0, pay = 0, left = 0;
    while(1){
        printf("\n-- VM --\n");
        printf("1 Coke  15\n");
        printf("2 Water 10\n");
        printf("3 Snack 25\n");
        printf("4 Exit&Pay\n");
        printf("Total = %.2f\n", money);
        printf("Choose: ");
        if(scanf("%d", &x) != 1){
            x = 4;
        }
        if(x == 4)
        break;
        switch(x){
            case 1: money += 15; break;
            case 2: money += 10; break;
            case 3: money += 25; break;
            default:
                printf("Wrong\n");
                continue;
        }
        printf("Added -> %.2f\n", money);
    }
    if(money == 0){
        printf("Nothing bought\n");
        return 0;
    }
    printf("Pay %.2f\n", money);
    printf("Input money: ");
    scanf("%f", &pay);
    if(pay < money){
        printf("Not enough\n");
    }else{
        left = pay - money;
        printf("Change %.2f\n", left);
    }
    return 0;
}