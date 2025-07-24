#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void binary_search(int*,int);

int main(){
    int* arr;
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("use sorted array\n");
    arr=read_arr(size);
    binary_search(arr,size);
    free(arr);
}

void binary_search(int* arr,int size){
    int key;
    printf("enter the key to find\n");
    scanf("%d",&key);
    int left=0;
    int right=size-1;
    int found=0;
    while(left<=right){
        int mid=((right-left)+left)/2;
        if(arr[mid]>key){
            left=arr[mid];
        }
        else if(arr[mid]<key){
            right=arr[mid];

        }
        else{
            printf("%d found\n",key);
            found=1;
            break;
        }
    }
    if(!found){
        printf("%d not found \n");
    }
}