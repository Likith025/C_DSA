#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void arr_rev(int*,int);

int main(){
    int size;
    int*arr;
    printf("enter the size of array\n");
    scanf("%d",&size);
    arr=read_arr(size);
    arr_rev(arr,size);
    print_arr(arr,size);
    free(arr);

}

void arr_rev(int* arr,int size){
    int temp=0;
    //index approach
    // for (int i=0;i<size/2;i++){
    //     temp=arr[i];
    //     arr[i]=arr[size-i-1];
    //     arr[size-i-1]=temp;
    // }

    // 2 pointer approach
    int* right=arr+size-1;
    int*left=arr;
    while(left<right){
        temp=*left;
        *left=*right;
        *right=temp;
        left++;
        right--;
    }


}
