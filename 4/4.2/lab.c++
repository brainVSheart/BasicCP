#include <stdio.h>
int main(){
    int n, i;
    int sum = 0, fail = 0;
    if(scanf("%d", &n) != 1)
    return 0;
    int s[n];
    for(i = 0; i < n; i++){
        scanf("%d", &s[i]);
        if(s[i] < 50)
            fail++;
        else
            sum += s[i];
    }
    printf("Passing Scores Sum: %d\n", sum);
    printf("Failing Students Count: %d\n", fail);
    return 0;
}