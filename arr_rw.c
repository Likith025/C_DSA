#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

int* read_arr(int size){
    int *arr = (int*) malloc(size*sizeof(int));
    printf("enter %d elements for the array\n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}

void print_arr(int*arr,int size){
    printf("Printing the array of size %d\n",size);
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");

}