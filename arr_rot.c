#include<stdio.h>
#include<stdlib.h>
#include "arr.h"


void arr_rot(int*,int,int);


int main(){

    int*arr;
    int size;
    int n;

    printf("Enter the size of the array: ");
    scanf("%d",&size);
    arr=read_arr(size);
    printf("enter the places to rotate\n");
    scanf("%d",&n);
    arr_rot(arr,size,n);
    print_arr(arr,size);
    free(arr);
    return 0;



}

void arr_rot(int* arr,int size,int n){
    n=n%size;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[n-i-1]=arr[size-1-i];
    }
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-n];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    
}