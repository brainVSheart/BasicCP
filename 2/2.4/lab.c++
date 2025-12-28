#include <stdio.h>
int main(){
    float principal, payment, interest;
    const float interest_rate = 0.01f;
    const float penalty = 10.0f;
    int month = 0;
    const int MAX_MONTH = 10;
    printf("Enter the principal amount: ");
    if(scanf("%f", &principal) != 1 || principal <= 0){
        printf("Invalid principal amount.\n");
        return 1;
    }
    printf("Enter the payment: ");
    if(scanf("%f", &payment) != 1 || payment <= 0){
        printf("Invalid payment amount.\n");
        return 1;
    }
    while(principal > 0 && month < MAX_MONTH){
        interest = principal * interest_rate;
        if(payment < interest) {
            principal += penalty;
        }
        principal += interest;
        principal -= payment;
        month++;
        if(principal < 0)
            principal = 0;
        printf("Month %d: Remaining %.2f\n", month, principal);
    }
    if(principal == 0)
        printf("Loan settled in %d months\n", month);
    else
        printf("Loan settled in 10+ months\n");
    return 0;
}
