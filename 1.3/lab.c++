#include <stdio.h>
int main(){
    int r,num1,num2,o;
while (1){
    printf("Enter the first number : ");
    if (scanf("%d",&num1)!=1){
        printf("Error\n");
        return 1;
    }
    printf("Enter the second number : ");
    if (scanf("%d",&num2)!=1){
        printf("Error\n");
        return 1;
    }
    printf("Enter the operation type (1, 2, 3, 4) : ");
    if (scanf("%d",&o)!=1){
        printf("Error\n");
        return 1;
    }
if(o==1){
    printf("The result is : %d\n",r=num1+num2);
    }else if(o==2){
        printf("The result is : %d\n",r=num1-num2);
    }else if(o==3){
        printf("The result is : %d\n",r=num1*num2);
    }else if(o==4){
        printf("The result is : %.2f\n",(float)num1/num2);
    }else{
        printf("Out of operation\n");
    }
    if(o==0){
      break;
    }
}
    return 0;
}