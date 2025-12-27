#include <stdio.h>
struct Student{
    int id;
    int m, s, e;
    int sum;
};
char grade(int x);
void avg(int x, float *out);
int main(){
    struct Student st;
    char g;
    float a = 0;
    printf("ID: ");
    if(scanf("%d", &st.id) != 1)
    return 0;
    printf("Math: ");
    scanf("%d", &st.m);
    printf("Sci: ");
    scanf("%d", &st.s);
    printf("Eng: ");
    scanf("%d", &st.e);
    st.sum = st.m + st.s + st.e;
    g = grade(st.sum);
    avg(st.sum, &a);
    printf("\n--- STUDENT ACADEMIC REPORT ---\n");
    printf("ID: %d\n", st.id);
    printf("M:%d S:%d E:%d\n", st.m, st.s, st.e);
    printf("Total: %d\n", st.sum);
    printf("Average: %.2f\n", a);
    printf("Grade: %c\n", g);
    return g == 'F';
}
char grade(int x){
    return x >= 250 ? 'A' : (x >= 200 ? 'B' : 'C');
}
void avg(int x, float *out){
    *out = x / 3.0f;
}