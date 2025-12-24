#include <stdio.h>
struct SalesRecord{
    float target;
    float actual;
    char name[50];
};
int main(void){
    int N;
    float totalCommission = 0.0f;
    if(scanf("%d", &N) != 1){
        return 1;
    }
    struct SalesRecord records[N];
    for(int i = 0; i < N; i++){
        float commission;
        if(scanf("%f %f %s",
                  &records[i].target,
                  &records[i].actual,
                  records[i].name) != 3){
            break;
        }
        commission = records[i].actual * 0.10f;
        if(records[i].actual >= records[i].target * 1.2f){
            commission += 200.0f;
        }else if(records[i].actual >= records[i].target){
            commission += 50.0f;
        }else if(records[i].actual < records[i].target * 0.9f){
            commission -= 100.0f;
        }
        totalCommission += commission;
    }
    printf("Grand Total Commission: %.2f\n", totalCommission);
    return 0;
}