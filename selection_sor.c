#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void selection_sort(int*,int);

int main(){
    int* arr;
    int size;
    printf("enter the size\n");
    scanf("%d",&size);
    arr=read_arr(size);
    selection_sort(arr,size);
    print_arr(arr,size);
    free(arr);
}


void selection_sort(int* arr,int size){
    int i,j,min_index,temp;
     min_index=0;
     for(i=0;i<size;i++){
        min_index=i;
        for(j=i+1;j<size;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
     }
    
}