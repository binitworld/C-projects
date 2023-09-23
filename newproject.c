#include<stdio.h>
int main() 
{
int a,b,sum,m,s,d;
printf("Enter two intrger values: ");
scanf("%d %d", &a,&b);
sum=a+b;
m=a*b;
s=a-b;
d=a/b;
printf("sum of %d and %d=%d\n",a,b,sum);
printf("multiplication of %d and %d=%d\n",a,b,m);
printf("substract of %d and %d=%d\n", a,b,s);
printf("division of %d and %d =%d\n",a,b,d);


return 0;
}