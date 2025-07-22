#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void check_palindrome(int*,int);

int main(){

    int* arr;
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    arr=read_arr(size);
    check_palindrome(arr,size);
    free(arr);
    return 0;
}


void check_palindrome(int* arr,int size){
    int* left=arr;
    int* right=arr+size-1;
    while(left<right){
        if(*left!=*right){
            printf("array is not palindrome\n");
            return;
        }
        left++;
        right--;
    }
                printf("array is palindrome\n");

}