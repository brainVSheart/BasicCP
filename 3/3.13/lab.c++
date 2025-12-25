#include <stdio.h>
int main(){
    char s[101];
    int U = 0, L = 0, D = 0, O = 0, p = 0;
    if(scanf("%s", s) != 1)
    return 0;
    while(s[p]){
        if(s[p] >= 'A' && s[p] <= 'Z')
            U++;
        else if(s[p] >= 'a' && s[p] <= 'z')
            L++;
        else if(s[p] >= '0' && s[p] <= '9')
            D++;
        else
            O++;
        p++;
    }
    printf("Uppercase: %d\n", U);
    printf("Lowercase: %d\n", L);
    printf("Digits: %d\n", D);
    printf("Special/Other: %d\n", O);
    return 0;
}