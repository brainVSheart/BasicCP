#include <stdio.h>
#define NUM_EMPLOYEES 4
struct Employee{
    int id;
    int salary;
};
void sweep(struct Employee e[], int n, int *hi, int *lo);
int main(){
    struct Employee crew[NUM_EMPLOYEES];
    int hi = 0, lo = 0, i = 0;
    printf("Input %d employees ID\n", NUM_EMPLOYEES);
    while (i < NUM_EMPLOYEES){
        printf("ID %d: ", i + 1);
        if (scanf("%d", &crew[i].id) != 1) return 0;
        printf("Pay %d: ", i + 1);
        if (scanf("%d", &crew[i].salary) != 1) return 0;
        i++;
    }
    sweep(crew, NUM_EMPLOYEES, &hi, &lo);
    printf("\n--- EMPLOYEE SALARY SUMMARY ---\n");
    printf("ID | SALARY\n");
    printf("-----------\n");
    for (i = 0; i < NUM_EMPLOYEES; i++)
        printf("%d | %d\n", crew[i].id, crew[i].salary);
    printf("\nMaximum Salary Found: %d\n", hi);
    printf("Minimum Salary Found: %d\n", lo);
    return hi < lo;
}
void sweep(struct Employee e[], int n, int *hi, int *lo){
    *hi = e[0].salary;
    *lo = e[0].salary;
    while (--n){
        if (e[n].salary > *hi) *hi = e[n].salary;
        if (e[n].salary < *lo) *lo = e[n].salary;
    }
}