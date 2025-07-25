#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void bubble_sort(int*arr,int size);

int main(){

    int* arr;
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);

    arr=read_arr(size);
    bubble_sort(arr,size);
    print_arr(arr,size);
    free(arr);
    return 0;
    
}

void bubble_sort(int* arr,int size){
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}