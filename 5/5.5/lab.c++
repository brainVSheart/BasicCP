#include <stdio.h>
#define NUM_STUDENTS 4
struct Student{
    int id;
};
int probe(struct Student s[], int n, int key);
int main(){
    struct Student pool[NUM_STUDENTS];
    int key = 0, hit = 0, i = 0;
    printf("Input %d ID\n", NUM_STUDENTS);
    while (i < NUM_STUDENTS){
        printf("ID %d: ", i + 1);
        if (scanf("%d", &pool[i].id) != 1) return 0;
        i++;
    }
    printf("\nlookup: ");
    if (scanf("%d", &key) != 1) return 0;
    hit = probe(pool, NUM_STUDENTS, key);
    printf("\n--- ID SEARCH REPORT ---\n");
    printf("Recorded IDs: ");
    for (i = 0; i < NUM_STUDENTS; i++)
        printf("%d%s", pool[i].id, i == NUM_STUDENTS - 1 ? "\n" : " ");
    printf("Search ID: %d\n", key);
    printf("%s\n", hit ? "ID FOUND in the system." : "ID NOT FOUND in the system.");
    return hit == 0;
}
int probe(struct Student s[], int n, int key){
    while (n--)
        if (s[n].id == key) return 1;
    return 0;
}