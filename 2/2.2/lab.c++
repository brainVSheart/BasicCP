#include <stdio.h>
int main(){
    int N, i, quantity;
    float unitPrice, itemCost,grandTotal=0;
    printf("Enter unit: ");
    if(scanf("%d", &N) !=1){
        printf("Invalid input\n");
        return 1;
    }
    for(i=0; i<N; i++){
        printf("price : ");
        if(scanf("%f", &unitPrice) !=1){
            printf("Invalid input\n");
            return 1;
        }
        printf("how meny : ");
        if(scanf("%d", &quantity) !=1){
            printf("Invalid input\n");
            return 1;
        }
        if(unitPrice >= 1000.00){
            itemCost = unitPrice*(quantity-(0.1*quantity));
        }else{
            itemCost = unitPrice*quantity;
        }
        grandTotal += itemCost;
    }
    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}