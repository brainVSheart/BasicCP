#include <stdio.h>
int cal_change(int cost, int pay);
int count(int *rem, int d);
int main(){
    int cost, pay, change, rem;
    int b1000, b500, b100, b50, b20, b10, b5, b2, b1;
    printf("Input price: ");
    scanf("%d", &cost);
    printf("Input pay: ");
    scanf("%d", &pay);
    change = cal_change(cost, pay);
    if(change < 0){
        printf("ERROR: Amount Paid is less than Total Cost\n");
        return 1;
    }
    rem = change;
    b1000 = count(&rem, 1000);
    b500  = count(&rem, 500);
    b100  = count(&rem, 100);
    b50   = count(&rem, 50);
    b20   = count(&rem, 20);
    b10   = count(&rem, 10);
    b5    = count(&rem, 5);
    b2    = count(&rem, 2);
    b1    = count(&rem, 1);
    printf("\n--- CHANGE CALCULATION REPORT ---\n");
    printf("Total Cost: %d\n", cost);
    printf("Amount Paid: %d\n", pay);
    printf("Change Amount: %d\n", change);
    printf("\nDenomination Breakdown:\n");
    if (b1000) printf("1000 Baht: %d\n", b1000);
    if (b500)  printf("500 Baht: %d\n", b500);
    if (b100)  printf("100 Baht: %d\n", b100);
    if (b50)   printf("50 Baht: %d\n", b50);
    if (b20)   printf("20 Baht: %d\n", b20);
    if (b10)   printf("10 Baht: %d\n", b10);
    if (b5)    printf("5 Baht: %d\n", b5);
    if (b2)    printf("2 Baht: %d\n", b2);
    if (b1)    printf("1 Baht: %d\n", b1);
    return 0;
}
int cal_change(int cost, int pay){
    return pay >= cost ? pay - cost : -1;
}
int count(int *rem, int d){
    int c = *rem / d;
    *rem %= d;
    return c;
}