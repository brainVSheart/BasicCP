#include <stdio.h>
#define SIZE 5
int calculate_net_balance(int *trans_array, int size, int *status_ptr){
    int net = 0;
    for(int i = 0; i < size; i++){
        net += *(trans_array + i);
    }
    if(net >= 0) *status_ptr = 1;
    else *status_ptr = 0;
    return net;
}
int main(){
    int transactions[SIZE];
    int net_balance, finance_status, i;
    printf("Enter %d transactions (Income +, Expense -):\n", SIZE);
    for(i = 0; i < SIZE; i++){
        printf("Transaction %d: ", i + 1);
        scanf("%d", &transactions[i]);
    }
    net_balance = calculate_net_balance(transactions, SIZE, &finance_status);
    printf("\n--- PERSONAL FINANCE REPORT ---\n");
    printf("Transactions Recorded: ");
    for (i = 0; i < SIZE; i++) printf("%d ", transactions[i]);
    printf("\nNet Balance: %d\n", net_balance);
    printf("Status: %s\n", (finance_status == 1) ? "PROFIT" : "LOSS");
    return 0;
}