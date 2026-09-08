#include<stdio.h>
int main() {
    int marks;
    printf("enter marks \n");
    scanf("%d",&marks);
    if(marks>=85){
        printf("grade a",marks);
    }else if(marks>=70){
        printf("grade=b",marks);
    } else if(marks>=60){
        printf("grade=c",marks);
    } else{
printf("grade=d",marks);
    }
    return 0;
    }
