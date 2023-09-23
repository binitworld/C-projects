#include <stdio.h>
int main()
{
    int age, i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", age);
        if (age < 10)
        {
            break;
        }
    }
        
   return 0;
}