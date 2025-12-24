#include <stdio.h>
struct Student{
    int id;
    float score;
    char name[50];
};
int main(void){
    int total;
    if(scanf("%d", &total) != 1){
        return 1;
    }
    struct Student list[total];
    struct Student *ptr = list;
    for(; ptr < list + total; ptr++){
        if(scanf("%d %f %s", &ptr->id, &ptr->score, ptr->name) != 3){
            return 1;
        }
    }
    ptr = list;
    while(ptr < list + total){
        printf("[STUDENT ID] %d | %s | %.2f\n",
               ptr->id,
               ptr->name,
               ptr->score);
        ptr++;
    }
    return 0;
}