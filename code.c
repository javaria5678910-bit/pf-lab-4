#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    switch (num)
    {
        case 10:
           printf("Num is 10\n");
           break;
        default:
           printf("Num is not 10\n");
           break;
    }
}