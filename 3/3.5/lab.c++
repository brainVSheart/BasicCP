#include <stdio.h>
struct Order{
    int itemId;
    float price;
    int qty;
};
int main(){
    int n, i;
    float total = 0.0;
    const float SHIPPING = 50.0;
    const float DISCOUNT = 0.10;
    if(scanf("%d", &n) != 1)
        return 1;
    struct Order o[n];
    for(i = 0; i < n; i++){
        float itemTotal;
        if(scanf("%d %f %d", &o[i].itemId, &o[i].price, &o[i].qty) != 3)
            return 1;
        itemTotal = o[i].price * o[i].qty + SHIPPING;
        if(itemTotal >= 500.0)
            itemTotal *= (1.0 - DISCOUNT);
        total += itemTotal;
    }
    printf("Grand Total: %.2f\n", total);
    return 0;
}