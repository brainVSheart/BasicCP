#include <stdio.h>
int main(){
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    printf("Input Plan(1, 2): ");
    if(scanf("%d", &planCode) != 1){
        printf("Error\n");
        return 1;
    }
    printf("Input Data(GB): ");
    if(scanf("%f",&dataUsage_GB) != 1){
        printf("Error\n");
        return 1;
    }
    switch (planCode){
        case 1:
            if(dataUsage_GB<=10.0){
                totalBill=299.0;
            }else{
                totalBill=299.0+10.0*(dataUsage_GB-10.0);
            }
            break;
        case 2:
            if(dataUsage_GB<=20.0){
                totalBill=599.0;
            }else{
                totalBill=599.0+50.0+5.0*(dataUsage_GB-20.0);
            }
            break;
        default:
            printf("Invalid Plan Code\n");
            return 1;
    }
    printf("Total Bill: %.2f\n", totalBill);
    return 0;
}