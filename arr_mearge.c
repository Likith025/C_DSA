#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void mearge_arr(int*,int*,int,int);


int main(){
    int* arr_1;
    int* arr_2;
    int size_1,size_2;
    printf("enter the size of 1st array\n");
    scanf("%d",&size_1);
    arr_1=read_arr(size_1);
    printf("enter the size of 2nd array\n");


    scanf("%d",&size_2);
    arr_2=read_arr(size_2);
    mearge_arr(arr_1,arr_2,size_1,size_2);
    free(arr_1);
    free(arr_2);

}

void mearge_arr(int* arr_1,int* arr_2,int size_1,int size_2){
    int* res=(int*)malloc((size_1+size_2)*sizeof(int));
    int min_size=(size_1<=size_2)?size_1:size_2;
    
    int i=0;
    int j=0;
    int*ptr=res;
    while(i<size_1&&j<size_2){
        if(arr_1[i]<=arr_2[j]){
            *ptr=arr_1[i];
            ptr++; 
            i++;

        }
       else{
            *ptr=arr_2[j];
            ptr++; 
            j++;
        }
    }
    while (i<size_1){
        *ptr=arr_1[i];
            ptr++; 
            i++;

    
}
while (j<size_2){
        *ptr=arr_2[j];
            ptr++; 
            j++;
    
}

    print_arr(res,(size_1+size_2));
    free(res);
}

