#include<stdio.h>
#include<stdlib.h>

void merge_sort(int *arr, int start, int end);
void merge(int *arr, int start, int mid, int end);
void print_array(char* title, int *arr, int start, int end);

int main(){

    int arr[] = {5,6,1,3,5};
    // int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr, 0, len-1);
    
    print_array("final array",arr,0, len - 1);
    return 0;
}

void print_array(char* title, int *arr, int start, int end){
    printf("\n-----------%s-------------",title);
    for(int i = start; i <= end; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
}

void merge_sort(int *arr, int start, int end){
    print_array("sort", arr,start, end);
    if(start < end){
        int mid = start + (end - start) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void merge(int *arr, int start, int mid, int end){

    int len = end - start + 1 ;
    printf("===================merging (%d->%d => %d)===============",start,end,len);
    // int len = end + 1;
    int *arr2 = (int *) malloc(sizeof(int) * len);
    int i1 = start;
    int i2 = mid + 1;
    int x = 0;

    while(i1 <= mid && i2 <= end){
        if(arr[i1] <= arr[i2]){
            arr2[x++] = arr[i1++];
        }else{
            arr2[x++] = arr[i2++];
        }
    }

    while(i1 <= mid){
     arr2[x++] = arr[i1++];   
    }
    while(i2<= end){
        arr2[x++] = arr[i2++];
    }

    for(int i = 0, j = start; i < len; i++, j++){
        arr[j] = arr2[i];
    }

    print_array("before array",arr2,0,len-1);
    free(arr2);

}