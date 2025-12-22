#include <stdio.h>
int main(){
    int categoryCode;
    float price_before_vat;
    float totalBill = 0.0;
    float vatAmount = 0.0;
    printf("Input the price: ");
    if (scanf("%f", &price_before_vat) != 1){
        printf("Error\n");
        return 1;
    }
    printf("Input the category: ");
    if (scanf("%d", &categoryCode) != 1){
        printf("Error\n");
        return 1;
    }
    if(categoryCode == 1){
        totalBill = price_before_vat * 1.07;
    }else if(categoryCode == 2){
        totalBill = price_before_vat;
    }else if(categoryCode == 3){
        totalBill = price_before_vat * 1.15;
    }else{
        printf("Invalid Category\n");
        totalBill = 0.00;
    }
    if(totalBill > 0.0){
        vatAmount = totalBill - price_before_vat;
        printf("VAT Amount: %.2f\n", vatAmount);
        printf("Total Price: %.2f\n", totalBill);
    }
    return 0;
}