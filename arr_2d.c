#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

int** read_2d_arr(int ,int);
void print_2d_arr(int**,int,int);
void free_2d_arr(int**,int);

int main(){
    int col,row;
    int **arr;
    printf("enter the number of rows\n");
    scanf("%d",&row);
    printf("enter the number of col\n");
    scanf("%d",&col);
    arr=read_2d_arr(row,col);
    print_2d_arr(arr,row,col);
    free_2d_arr(arr,row);
    
}

int** read_2d_arr(int row,int col){
    int ** arr=(int**) malloc(row*sizeof(int*));
    for(int i=0;i<row;i++){
    arr[i]=read_arr(col);
    }
    return arr;

}


void print_2d_arr(int** arr,int row, int col){
    for(int i=0;i<row;i++){
        print_arr(arr[i],col);
        
    }
    
}
void free_2d_arr(int** arr,int row){
    for(int i=0;i<row;i++){
        free(arr[i]);
    }
    free(arr);
}