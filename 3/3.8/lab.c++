#include <stdio.h>
struct Campaign{
    char name[50];
    float productPrice;
    int salesCount;
    float adSpend;
};
int main(void){
    int N;
    if(scanf("%d", &N) != 1){
        return 1;
    }
    struct Campaign campaigns[N];
    for(int i = 0; i < N; i++){
        float commissionRate;
        float totalRevenue;
        float commissionAmount;
        float netProfitLoss;

        if(scanf("%s %f %d %f",
                  campaigns[i].name,
                  &campaigns[i].productPrice,
                  &campaigns[i].salesCount,
                  &campaigns[i].adSpend) != 4){
            continue;
        }
        if(campaigns[i].salesCount >= 20){
            commissionRate = 0.20f;
        }else if(campaigns[i].salesCount >= 10){
            commissionRate = 0.15f;
        }else{
            commissionRate = 0.10f;
        }
        totalRevenue = campaigns[i].productPrice * campaigns[i].salesCount;
        commissionAmount = totalRevenue * commissionRate;
        netProfitLoss = commissionAmount - campaigns[i].adSpend;
        printf("--- Campaign: %s ---\n", campaigns[i].name);
        printf("Sales: %d, Ad Spend: %.2f\n",
               campaigns[i].salesCount, campaigns[i].adSpend);
        printf("Rate Used: %.0f%%\n", commissionRate * 100);
        printf("Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n",
               totalRevenue, commissionRate * 100,
               campaigns[i].adSpend, netProfitLoss);
        printf("Net Result: %.2f\n", netProfitLoss);
        printf("-------------------\n");
    }
    return 0;
}