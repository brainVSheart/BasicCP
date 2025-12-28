#include <stdio.h>
#define M 3
int analyze(int *r, int *e, int n, int *st){
    int tr = 0, te = 0;
    for(int i = 0; i < n; i++){
        tr += *(r + i);
        te += *(e + i);
    }
    *st = (tr - te >= 0);
    return tr - te;
}
void input(int a[], int n, const char *t){
    printf("Input %d months %s NUM\n", n, t);
    for (int i = 0; i < n; i++) {
        printf("Month %d %s: ", i + 1, t);
        scanf("%d", &a[i]);
    }
    printf("\n");
}
void total(int a[], int n, const char *t){
    long s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    printf("TOTAL %s: %ld\n", t, s);
}
int main(){
    int rev[M], exp[M], profit, ok;
    input(rev, M, "REVENUE");
    input(exp, M, "EXPENSE");
    profit = analyze(rev, exp, M, &ok);
    printf("--- 3 MONTH FINANCIAL ANALYSIS REPORT ---\n");
    total(rev, M, "REVENUE");
    total(exp, M, "EXPENSE");

    printf("\nNET PROFIT: %d\n", profit);
    printf("BUSINESS STATUS: ");
    if(ok)
        printf("PROJECT IS PROFITABLE\n");
    else
        printf("PROJECT IS UNPROFITABLE\n");
    return 0;
}