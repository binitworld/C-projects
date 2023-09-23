#include<stdio.h>
#include<stdlib.h>
 
void input(int *arr, int n, int i){ //Taking input
    for (i; i<n; i++){
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
}
 
void display(int *arr, int n){ //Displaying elements
    for (int i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
 
void main(){
    int n1,n2;
    printf("Enter size of array 1: ");
    scanf("%d",&n1);
    int *arr=(int *)malloc(n1*sizeof(int));
    input(arr,n1,0);
    display(arr,n1);
    printf("Expansion number: ");
    scanf("%d",&n2);
    int tot=n1+n2;
    arr=realloc(arr,tot*sizeof(int));
    input(arr,tot,n1);
    display(arr,tot);
}



