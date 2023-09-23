#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter the two no.%d\n", &a, &b);
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("the summission of two no.= %d", sum);
    return 0;
}