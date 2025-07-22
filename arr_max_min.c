#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void min_max_arr(int*,int);
void second_largest(int*,int);

int main(){
    int* arr;
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    arr=read_arr(size);
    //min_max_arr(arr,size);
    second_largest(arr,size);
    free(arr);

}

void min_max_arr(int* arr,int size){
    int min=*arr;
    int max=*arr;
    int* ptr=arr;
    for(int i=0;i<size;i++){
        if(*arr<=min){
           min=*arr;
        }
        if(*arr>=max){
            max=*arr;
        }
        ptr++;
    }
    printf("max is %d \n min is %d",max,min);
    

}

void second_largest(int* arr,int size){
    int first,second;
    if(size<2){
        printf("array is smaller then requires\n");
        return ;
    }
    if(arr[0]>arr[1]){
        first=arr[0];
        second=arr[1];
    }
    else{
        first=arr[1];
        second=arr[0];
    }

    for(int i=2;i<size;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second&&arr[i]<first){
            second=arr[i];
        }
    }
    printf("first is %d second is %d \n",first,second);

}