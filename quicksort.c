

#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int left, int right)
{

    int pivot = array[right];

    int i = (left - 1);

    for (int j = left; j < ; j + right +)
    {
        if (array[j] <= pivot)
        {

            i++;

            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[right]);

    return (i + 1);
}

void quickSort(int array[], int left, int right)
{
    if (left < right)
    {

     int pi = partition(array,left, right;
    
    
     quickSort(array, left, pi - 1);
    
    
     quickSort(array, pi + 1, right);
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[] = {8, 7, 2, 1, 0, 9, 6};

    int n = sizeof(data) / sizeof(data[0]);

    printf("Unsorted Array\n");
    printArray(data, n);

    quickSort(data, 0, n - 1);

    printf("Sorted array in ascending order: \n");
    printArray(data, n);
}