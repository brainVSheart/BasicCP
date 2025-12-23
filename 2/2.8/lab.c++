#include <stdio.h>
int main(void){
    int nStudent;
    int id, score;
    int allClass, missClass;
    int i;
    int pass = 0, fail = 0;
    float attend;
    if(scanf("%d", &nStudent) != 1)
        return 1;
    for(i = 0; i < nStudent; ++i){
        if(scanf("%d %d %d %d", &id, &score, &allClass, &missClass) != 4)
            return 1;
        attend = (allClass - missClass) * 100.0f / allClass;
        if(score >= 50 && attend >= 75.0f){
            printf("Student %d: PASS\n", id);
            pass++;
        }else{
            printf("Student %d: FAIL - ", id);
            if(score < 50 && attend < 75.0f)
                printf("Both Score & Attendance\n");
            else if(score < 50)
                printf("Low Score\n");
            else
                printf("Low Attendance %.2f%%\n", attend);
            fail++;
        }
    }
    printf("---Summary---\n");
    printf("Total pass : %d\n", pass);
    printf("Total fail : %d\n", fail);
    return 0;
}