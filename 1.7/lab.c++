#include <stdio.h>
int main(){
    int cust;
    float kWh;
    float bill = 0.0;
    printf("Enter customer type (1 or 2): ");
    if(scanf("%d", &cust) != 1){
        return 1;
    }
    printf("Enter kWh used: ");
    if(scanf("%f", &kWh) != 1){
        return 1;
    }
    if(cust == 1){
        if(kWh <= 100){
            bill = kWh * 3.0;
        }else{
            bill = kWh * 4.0;
        }
    }else if(cust == 2){
        if(kWh <= 500) {
            bill = kWh * 5.0;
        }else{
            bill = kWh * 6.5;
        }
    }else{
        printf("Invalid customer type\n");
        return 0;
    }
    printf("%.2f\n", bill);
    return 0;
}