#include <stdio.h>

void main()

{

  struct student

  {

  int marks[5];

  }s[60];

  int failed=0,passed=0;

  for(int i=0;i<60;i++)

  {

    printf("Enter the data for %d student:\n",i+1);

    for(int j=0;j<5;j++)

    {

      printf("Enter marks of %d subject: ",j+1);

      scanf("%d",&s[i].marks[j]);

    }

  }

  for(int i=0;i<60;i++)

  {

    int sum=0;

    int count=0;

    for(int j=0;j<5;j++)

    {

      if(s[i].marks[j]<35)

      {

        count++;

      }

      sum+=s[i].marks[j];

    }

    float per=sum/5;

    if(per>=40&&count<3)

    {

      passed++;

    }

    else

    {

      failed++;

    }

  }

  printf("Failed=%d, Passed=%d",failed,passed);

}


