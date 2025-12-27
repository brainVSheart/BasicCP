#include <stdio.h>
struct Product{
    char id[10];
    float c, s;
    int q;
};
float gain(float c, float s, int q);
float rate(float c, float s);
int main(){
    struct Product p;
    float g = 0, r = 0;
    printf("Input item ID: ");
    scanf("%s", &p.id);
    printf("Input Price: ");
    scanf("%f", &p.c);
    printf("Sell Price: ");
    scanf("%f", &p.s);
    printf("Input Quantity: ");
    scanf("%d", &p.q);
    g = gain(p.c, p.s, p.q);
    r = rate(p.c, p.s);
    printf("\n--- INVENTORY PROFIT REPORT ---\n");
    printf("Item ID: %s\n", p.id);
    printf("C: %.2f S: %.2f Q: %d\n", p.c, p.s, p.q);
    printf("Total Profit: %.2f\n", g);
    printf("Profit Percentage: %.2f%%\n", r);
    printf("Status: %s\n", g > 0 ? "Profit" : (g < 0 ? "Loss" : "Break Even"));
    return g == 0;
}
float gain(float c, float s, int q){
    return (s - c) * q;
}
float rate(float c, float s){
    return c ? ((s - c) / c) * 100.0f : 0.0f;
}