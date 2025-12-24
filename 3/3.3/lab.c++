#include <stdio.h>
struct Student{
    int studentId;
    float score;
    char name[50];
};
int main(void){
    int N;
    float sum = 0.0f;
    if(scanf("%d", &N) != 1 || N <= 0){
        printf("Average Score: 0.00\n");
        return 0;
    }
    struct Student group[N];
    struct Student *p = group;
    for(; p < group + N; p++){
        if(scanf("%d %f %s", &p->studentId, &p->score, p->name) != 3){
            p->score = 0;
        }
        sum += p->score;
    }
    printf("Average Score: %.2f\n", sum / N);
    return 0;
}