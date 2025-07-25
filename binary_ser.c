#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void binary_search(int*,int,int);
void binary_search_rec(int*,int,int,int);
int main(){
    int* arr;
    int size;
    int key;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("use sorted array\n");
    arr=read_arr(size);
    //binary_search(arr,size,key);  //ittirative approach
    printf("enter the key to find\n");
    scanf("%d",&key);
    binary_search_rec(arr,0,size-1,key);
    
    free(arr);
}

void binary_search(int* arr,int size,int key){
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


void binary_search_rec(int* arr,int left,int right,int key){
    if(left>right){
        printf("%d not found \n",key);
        return;
    }
    int mid=((right-left)+left)/2;
    if(arr[mid]<key){
        return binary_search_rec(arr,mid+1,right,key);
    }
    else if(arr[mid]>key){
        return binary_search_rec(arr,left,mid-1,key);
    }
    else{
        printf("%d is found\n",key);
        return;
    }



}