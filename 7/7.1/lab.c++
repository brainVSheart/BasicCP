#include <stdio.h>
#define FILE_NAME "output_data.txt"
int main(){
    FILE *fp;
    int year = 2025;
    fp = fopen(FILE_NAME, "w");
    if(fp == NULL){
        printf("ERROR: Could not open file %s for writing.\n", FILE_NAME);
        return 1;
    }
    printf("--- FILE WRITING PROCESS ---\n");
    printf("Writing data to %s...\n", FILE_NAME);
    fprintf(fp, "Hello, C File Handling is easy.\n");
    fprintf(fp, "%d\n", year);
    fclose(fp);
    printf("File writing complete.\n");
    printf("\n--- FILE OPERATION REPORT ---\n");
    printf("Action: File created and data written successfully.\n");
    printf("Filename: %s\n", FILE_NAME);
    return 0;
}