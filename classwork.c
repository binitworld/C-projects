#include<stdio.h>

void read(int *list){
    FILE *f=fopen("data.txt","r");
    int num,i=0;
    while(!feof(f)){
        fscanf(f,"%d",&list[i]);
        *i= *i+1;
    }
    fclose(f);
    
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

void main(){
    int n;
    int list[100];
    n=read(list);
    selection_sort(list,n);
    write(list,n);
}