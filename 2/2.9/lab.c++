#include <stdio.h>
int main(void){
    int startStock, cmdCount;
    int code, amount;
    int stock;
    int i;
    float penaltyFee;
    float penaltySum = 0.0f;
    if (scanf("%d %f %d", &startStock, &penaltyFee, &cmdCount) != 3)
        return 1;
    stock = startStock;
    for (i = 0; i < cmdCount; ++i){
        if (scanf("%d %d", &code, &amount) != 2)
            return 1;
        switch (code){
            case 1:
                stock += amount;
                printf("Received %d units.\n", amount);
                break;
            case 2:
                if (amount <= 0){
                    printf("Error: Quantity must be positive.\n");
                }else if (amount > stock){
                    penaltySum += penaltyFee;
                    printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", penaltyFee);
                }else{
                    stock -= amount;
                    printf("Shipped %d units.\n", amount);
                }
                break;
            case 3:
                printf("Current Stock: %d\n", stock);
                printf("Total Penalties: %.2f\n", penaltySum);
                break;
            default:
                printf("Error: Invalid Command.\n");
        }
    }
    return 0;
}