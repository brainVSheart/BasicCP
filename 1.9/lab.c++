#include <stdio.h>
int main(){
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;
    printf("Input zone ID (1, 2, 3): ");
    if (scanf("%d", &zoneCode) != 1){
        printf("Invalid Input Format\n");
        return 1;
    }
        printf("Input weight: ");
    if (scanf("%f", &weight_kg) != 1){
        printf("Invalid Input Format\n");
        return 1;
    }
    switch (zoneCode) {
        case 1:
            if (weight_kg <= 5.0){
                totalCost = 50.0;
            } else {
                totalCost = 80.0;
            }
            break;
        case 2:
            if (weight_kg <= 10.0){
                totalCost = 150.0;
            } else {
                totalCost = 250.0;
            }
            break;
        case 3:
            totalCost = 500.0;
            break;
        default:
            printf("Invalid Zone Code\n");
            return 1;
    }
    printf("Total cost: %.2f Baht\n", totalCost);
    return 0;
}