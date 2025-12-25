#include <stdio.h>
int main(){
    int t, k;
    int a, b, armor;
    float atk, reduce, dmg;
    float miss;
    float need = 150.0;
    if(scanf("%d", &t) != 1)
    return 0;
    for(k = 0; k < t; k++){
        if(scanf("%d %d %d", &a, &b, &armor) != 3)
        break;
        atk = a*10;
        reduce = (armor < 50) ? 0.20 : 0.40;
        dmg = atk-(atk*reduce);
        if(dmg >= need){
            printf("SUCCESS! Net Damage: %.2f\n", dmg);
        }else{
            miss = need - dmg;
            printf("FAIL. Deficit: %.2f\n", miss);
        }
    }
    return 0;
}