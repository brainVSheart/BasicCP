#include <stdio.h>
#define FILE_NAME "input_data.csv"
int main(){
    FILE *fp;
    int a, b, c, d, e;
    int sum = 0;
    fp = fopen(FILE_NAME, "r");
    if(fp == NULL){
        printf("ERROR: Could not open file %s for reading.\n", FILE_NAME);
        return 1;
    }
    printf("--- FILE READING PROCESS ---\n");
    printf("Reading data from %s...\n", FILE_NAME);
    if(fscanf(fp, "%d,%d,%d,%d,%d", &a, &b, &c, &d, &e) != 5){
        printf("ERROR: Invalid file format.\n");
        fclose(fp);
        return 1;
    }
    sum = a + b + c + d + e;
    fclose(fp);
    printf("File reading complete.\n");
    printf("\n--- DATA ANALYSIS REPORT ---\n");
    printf("Data read: %d, %d, %d, %d, %d\n", a, b, c, d, e);
    printf("Total Sum: %d\n", sum);
    return 0;
}