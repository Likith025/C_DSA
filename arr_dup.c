#include <stdio.h>
#include<stdlib.h>
#include"arr.h"

void remove_dup(int*,int);


int main(){

    int* arr;
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    arr=read_arr(size);
    remove_dup(arr,size);
    free(arr);
    return 0;


}

void remove_dup(int* arr,int size){
    int* new_arr=(int*)(malloc(size*sizeof(int)));
    
    int k=0;

        for(int i=0;i<size;i++){
        int is_duplicate=0;

        for(int j=0;j<i;j++){

            if(arr[i]==arr[j]){

                    is_duplicate=1;
                    break;
                }

            }
            if(!is_duplicate){
                    new_arr[k]=arr[i];
                    k++;
                }
            
            
        }
        print_arr(new_arr,k);
        free(new_arr);
    }
