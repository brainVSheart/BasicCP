#include <stdio.h>
int main(){
    int clearanceLevel, age, isActive;
    printf("Input your level: ");
    if(scanf("%d", &clearanceLevel) != 1){
        printf("Invalid input format\n");
        return 1;
    }
    printf("Input your age: ");
    if(scanf("%d", &age) != 1){
        printf("Invalid input format\n");
        return 1;
    }
    printf("Input your status (1=Active, 0=Inactive): ");
    if(scanf("%d", &isActive) != 1){
        printf("Invalid input format\n");
        return 1;
    }
    if((clearanceLevel==3 && isActive==1) || (clearanceLevel==2 && age>=25 && isActive==1)){
        printf("Access Granted\n");
    }else{
        printf("Access Denied\n");
    }
    return 0;
}