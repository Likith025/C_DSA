#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void arr_num_count(int*,int);

int main(){

    int* arr;
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    arr=read_arr(size);
    arr_num_count(arr,size);
    free(arr);
    return 0;
}

void arr_num_count(int* arr,int size){

    // this works for (0-9)

    // int num[10]={0};
    // for(int i=0;i<size;i++){
    //     num[arr[i]]++;
    // }

    // for(int i=0;i<10;i++){
    //     if(num[i]==0){
    //         continue;
    //     }
    //     else{
    //         printf("%d appeared %d times \n",i,num[i]);
    //     }
    // }
    int count=0;
    int* visited = (int*)calloc(size, sizeof(int));
    for(int i=0;i<size;i++){
        if(visited[i]==0){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                visited[j]=1;
                count++;
            }
        }
    
        printf("%d appeared %d times\n",arr[i],count);
        count=0;
    }
    }
    free(visited);


}