#include <stdio.h>
#define NUM_STUDENTS 3
struct Student{
    int id;
    int score;
};
int pick(struct Student s[], int n);
int main(){
    struct Student room[NUM_STUDENTS];
    int who = -1, i = 0;
    printf("Input %d records\n", NUM_STUDENTS);
    while (i < NUM_STUDENTS){
        printf("[%d] id: ", i + 1);
        if (scanf("%d", &room[i].id) != 1) return 0;
        printf("[%d] score: ", i + 1);
        if (scanf("%d", &room[i].score) != 1) return 0;
        i++;
    }
    who = pick(room, NUM_STUDENTS);
    printf("\n--- STUDENT SCORE REPORT ---\n");
    printf("ID | SCORE\n");
    printf("---------\n");
    for (i = 0; i < NUM_STUDENTS; i++)
        printf("%d | %d\n", room[i].id, room[i].score);
    printf("\nTOP PERFORMER ID: %d\n", who);
    return who < 0;
}
int pick(struct Student s[], int n){
    int m = s[0].score;
    int r = s[0].id;
    while (--n){
        if (s[n].score >= m){
            m = s[n].score;
            r = s[n].id;
        }
    }
    return r;
}