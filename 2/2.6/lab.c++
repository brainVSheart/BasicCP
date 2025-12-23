#include <stdio.h>
int main(void){
    int totalMonths;
    int m, passed = 0;
    float money, sum;
    if (scanf("%d", &totalMonths) != 1)
        return 1;
    for (m = 1; m <= totalMonths; ++m){
        sum = 0.0f;
        while (1){
            if (scanf("%f", &money) != 1)
                return 1;
            if (money == 0.0f)
                break;
            sum += money;
        }
        if (sum >= 500.0f)
            passed++;
        printf("Month %d Total: %.2f\n", m, sum);
    }
    printf("Success Count: %d\n", passed);
    return 0;
}