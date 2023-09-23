#include<stdio.h>
int main()
{
  int week;

  printf("Enter the week number 1to7\n");
  scanf("%d",&week);
   
   switch (week)
  {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednessday\n");
        break;
    case 4:
        printf("Thrusday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Satarday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
   
    default:
    printf("Invalid input! PLEASE ENTER THE VALID WEEK FROM 1TO 7");
      break;
  }

 return 0;
}