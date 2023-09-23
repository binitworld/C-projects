#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);


   switch (age)
   {
        case 7:
             printf("the age is 7\n");
            break;
        case 17:
            printf("the age is 17\n");
            break;
        case 27:
            printf("the age is 27\n");
            break;

        default:
        printf("age is not 7,17 or 27\n");
        break;
    }

  return 0;

}