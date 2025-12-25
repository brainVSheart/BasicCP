#include <stdio.h>
struct Item{
    char name[50];
    float price;
    int qty;
};
int main(){
    int n, i;
    float sum = 0.0;
    float vat, total;
    const float VAT = 0.07;
    if(scanf("%d", &n) != 1){
        return 1;
    }
    struct Item list[n];
    printf("--- RECEIPT ---\n");
    for(i = 0; i < n; i++){
        scanf("%s %f %d", list[i].name, &list[i].price, &list[i].qty);
        float cost = list[i].price * list[i].qty;
        printf("%s x %d = %.2f\n", list[i].name, list[i].qty, cost);
        sum += cost;
    }
    vat = sum * VAT;
    total = sum + vat;
    printf("------------\n");
    printf("Subtotal: %.2f\n", sum);
    printf("VAT 7%%: %.2f\n", vat);
    printf("Grand Total: %.2f\n", total);
    return 0;
}
