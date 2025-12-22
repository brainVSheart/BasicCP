#include <stdio.h>
int main(){
    int dayCode, hour;
    printf("Input day (1-7): ");
    if (scanf("%d", &dayCode) != 1){
        printf("Error\n");
        return 1;
    }
    printf("Input hour (0-23) : ");
    if (scanf("%d", &hour) != 1){
        printf("Error\n");
        return 1;
    }
    switch (dayCode){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            if (hour >= 8 && hour <= 17){
                printf("System Running (Workday)\n");
            } else {
                printf("System Idle (Off-hours)\n");
            }
            break;
        case 6:
        case 7:
            printf("Weekend Relax Mode\n");
            break;
        default:
            printf("Invalid Day Code\n");
            break;
    }
    return 0;
}

