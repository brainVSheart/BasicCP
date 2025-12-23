#include <stdio.h>
int main(){
    float principal, payment, interest;//ยอดเงินต้น ยอดชำระ ดอกเบี้ยรวมยอดต้น
    int count = 0;
    const float Interest_rate = 0.01;
    const float Penalty = 10.0;
    printf("Enter the principal amount: ");
    if(scanf("%f", &principal) != 1){
        printf("Invalid input for principal amount.\n");
        return 1;
    }
    printf("Enter the payment: ");
    if(scanf("%f", &payment) != 1){
        printf("Invalid input for principal amount.\n");
        return 1;
    }
    while (principal > 0){
        interest = principal * Interest_rate;
        principal += interest;
        principal -= payment;
        printf("Mount %d:Remaining %.2f\n", count+1, principal);
        count++;
        if(payment < interest){
            principal += Penalty;
        }
        if(count > 10){
            break;
        }
    }
    if(count <= 10 ){
        printf("Loan settled in %d  mounts", count);
    }else{
        printf("Loan settled in 10+ mounts");
    }
    return 0;
}