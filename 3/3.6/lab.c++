#include <stdio.h>
struct Transaction{
    float amount;
    char description[50];
};
int main(void){
    int N;
    float income = 0.0f, expense = 0.0f;
    if(scanf("%d", &N) != 1){
        return 1;
    }
    struct Transaction list[N];
    for(int i = 0; i < N; i++){
        if (scanf("%f %s",
                  &list[i].amount,
                  list[i].description) != 2){
            continue;
        }
        if(list[i].amount >= 0.0f){
            income += list[i].amount;
        }else{
            expense += -list[i].amount;
        }
    }
    printf("Total Income: %.2f\n", income);
    printf("Total Expense: %.2f\n", expense);
    printf("Net Balance: %.2f\n", income - expense);
    return 0;
}