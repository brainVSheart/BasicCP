#include <stdio.h>
int main(void){
    int months, cmd;
    int m;
    float startBalance, balance;
    float penaltyFee, money;
    float penaltySum = 0.0f;
    if(scanf("%f %f %d", &startBalance, &penaltyFee, &months) != 3)
        return 1;
    balance = startBalance;
    printf("Starting Balance: %.2f\n", balance);
    for(m = 1; m <= months; ++m){
        if(scanf("%d %f", &cmd, &money) != 2)
            return 1;
        printf("--- Month %d ---\n", m);
        switch (cmd){
            case 1:
                balance += money;
                printf("Deposit: %.2f\n", money);
                break;
            case 2:
                if(money > balance){
                    balance -= penaltyFee;
                    penaltySum += penaltyFee;
                    printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", penaltyFee);
                }else{
                    balance -= money;
                    printf("Withdrawal: %.2f\n", money);
                }
                break;
            case 3:
            {
                float rate;
                float interest;
                if(balance < 1000.0f)
                    rate = 1.0f;
                else
                    rate = 2.5f;
                interest = balance * rate / 100.0f / 12.0f;
                balance += interest;
                printf("Interest: %.2f (Rate: %.2f%%)\n", interest, rate);
                break;
            }
            default:
                printf("Error: Invalid Command.\n");
        }
    }
    printf("Final Balance: %.2f\n", balance);
    printf("Total Penalties: %.2f\n", penaltySum);
    return 0;
}