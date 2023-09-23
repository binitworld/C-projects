// #include <stdio.h>
// #include <stdio.h>
// #include<stdio.h>

// void insertionSort(int *, int);

// void main()
// {
//     int i,num,array[1000];

//     FILE *fp = fopen("data_a5.txt","r");

//     fscanf(fp,"%d",&num); 

//     if(fp== NULL)
//     {
//         printf("Error reading File!\n");
//     return 0;
//     }  

//     while(!feof(fp))
//     { 
//         fscanf(fp,"%d", &array[num]);
//         //printf("%d\n", array[num]);
//     }

//     insertionSort(array,num);

//     for(i=0;i<num;i++)
//         printf("%d\n",&array[i]);

//     fclose(fp);

//     return 0;
// }

// void insertionSort(int *value, int size)
// {
//     int i,j,temp;

//     for(i = 0; i <= size; i++)
//     {
//         for(j = i; j >= 0; j--)
//         {
//             if(value[j+1]<value[j])
//             {
//                 temp=value[j+1];
//                 value[j+1]=value[j];
//                 value[j]=temp;
//             }
//             else
//                 break;
//         }
//     }
// }// C program for insertion sort
// #include <math.h>
// #include <stdio.h>

// /* Function to sort an array using insertion sort*/
// void insertionSort(int arr[], int n)
// {
// 	int i, key, j;
// 	for (i = 1; i < n; i++) {
// 		key = arr[i];
// 		j = i - 1;

// 		/* Move elements of arr[0..i-1], that are
// 		greater than key, to one position ahead
// 		of their current position */
// 		while (j >= 0 && arr[j] > key) {
// 			arr[j + 1] = arr[j];
// 			j = j - 1;
// 		}
// 		arr[j + 1] = key;
// 	}
// }

// // A utility function to print an array of size n
// void printArray(int arr[], int n)
// {
// 	int i;
// 	for (i = 0; i < n; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// }

// /* Driver program to test insertion sort */
// int main()
// {
// 	int arr[] = { 12, 11, 13, 5, 6 };
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	insertionSort(arr, n);
// 	printArray(arr, n);

// 	return 0;
// }
// Quick sort in C

#include <stdio.h>

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(data, n);
  
  // perform quicksort on data
  quickSort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}
