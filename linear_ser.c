#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void linear_search(int*,int);

int main(){
    int size;
    int* arr;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    arr=read_arr(size);
    linear_search(arr,size);
    free(arr);
    
}
void linear_search(int* arr,int size){
    int key;
    printf("enter the key to find\n");
    scanf("%d",&key);
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            printf("%d found at %d position\n",key,i+1);
            return;
        }
    }
    printf("%d not found\n",key);
}