#include <stdio.h>
int main()
{
    int num;
    for (int j = 0; j < 8; j++)
    {

        printf("%d\n", j);
        for (int i = 0; i < 8; i++)
        {
            printf("Enter the number. enter enter 0 to exist\n");
            scanf("%d, &num");
            if (num == 0)
            {

                goto end;
            }
        }
    }
     end:
return 0;
}