#include <stdio.h>
float win_odds(int outs){
    return outs * 4.0f;
}
int main(){
    int outs;
    float p = win_odds(outs);
    printf("Enter number of outs: ");
    scanf("%d", &outs);
    printf("\n--- POKER PROBABILITY REPORT (2 Cards Remaining) ---\n");
    printf("Calculated Outs: %d\n", outs);
    printf("Win Probability (Outs x 4): %.2f%%\n", p);
    printf("Assessment: ");
    if (p >= 20.0)
        printf("HIGH Win Probability\n");
    else
        printf("LOW Win Probability\n");
    return 0;
}