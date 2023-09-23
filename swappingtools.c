#include <stdio.h>

int main()
{
    int num1, num2,temp;
    printf("Enter Two numbers");
    scanf("%d%d",&num1,&num2);
    //print before Swapping
    printf("Values before Swapping\n");
    printf("Nmu1 = %d and Num2= %d\n", num1, num2);
    //Main Part of solution
    temp = num1;
    num1 = num2;
    num2 = temp;
    //print after Swapping
    printf("Values after Swapping\n");
    printf("Nmu1 = %d and Num2= %d", num1, num2);
    return 0;
}