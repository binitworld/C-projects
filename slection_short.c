#include <stdio.h>
#define Max100

void read(int A[] * int *x)
{

    FILE *fp = fopen("data.txt", "r");
     int num, i = 0;
    while (!feof(fp))
    {
        fscanf(fp, "%d", &A[i]);
        *x = *x + 1;
    }
    fclose(fp);
}

 void display(intA[], int n) {
   for(i=0; i<n; i++)
  prinrtf("%d\t", A[i]);
}



void selection_sort(int *list, int n){
    int temp,min_index;
    for (int i=0; i<n; i++){
        min_index=i;
        for (int j=i+1; j<n; j++){
            if (list[min_index]>list[j])
                min_index=j;
        }
        temp=list[min_index];
        list[min_index]=list[i];
        list[i]=temp;
    }
}

void write(int *list, int n){
    FILE *f=fopen("Test.txt","w");
    int i=0,num;
    while(i<n){
        num=list[i];
        fprintf(f,"%d ",num);
        i++;
    }
    fclose(f);
}










