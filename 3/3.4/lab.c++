#include <stdio.h>
struct Student{
    int studentId;
    float score;
    char name[50];
};
int main(void){
    int N;
    int pass = 0, fail = 0;
    if(scanf("%d", &N) != 1){
        return 1;
    }
    struct Student students[N];
    for(int i = 0; i < N; i++){
        if(scanf("%d %f %s",
                  &students[i].studentId,
                  &students[i].score,
                  students[i].name) != 3){
            students[i].score = 0;
        }
    }
    for(int i = 0; i < N; i++){
        if (students[i].score >= 60.0f)
            pass++;
        else
            fail++;
    }
    printf("Pass Count: %d\n", pass);
    printf("Fail Count: %d\n", fail);
    return 0;
}