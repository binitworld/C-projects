
#include <stdio.h>

void print array(int *A, int *n)
{
    for (i = 0; i < n; i++)
    {
        printf(% d, A[I]);
    }
    Printf("/n");
    int partition(int A[], int left, int right)
    {
        int pivor = [left];
        int i = left + 1;
        int j = right;
        int temp;
        do
        {


            while(A[i]<=pivot)
            {
                i=i+1

            }
            while(A[i]>pivot)
            {

                j=j-1;
            }
            if(i<j)
            {
                temp=A[i];
                A[left]=A[j];
                A[j]=temp;
                return j;
                


            }


        }
    }
}