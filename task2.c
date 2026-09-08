#include<stdio.h>
int main() {
    int num1,num2,num3;
    printf("enter three integers \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("num1 = %d is greater than num2 and num3 \n",num1);
    } else if (num2>num1 && num2>num3){
        printf("num2 =%d is greater than num1 and num3", num2);
    } else {
        printf("num3 =%d is greater than num1 and num2", num3);
    }
    return 0;
}