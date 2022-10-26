/*
This is merge sorting algorithm here user can input the array and program 
will sort it using merge sort algorithm
*/

#include<stdio.h>
#include<stdlib.h>

// method initialization
void merge_sort(int *arr, int start, int end);
void merge(int *arr, int start, int mid, int end);
void print_array(char* title, int *arr, int start, int end);
void get_input();

int main(){

    // testing algorithm
    // int arr[] = {5,2,4,9,2,1};
    // int len = sizeof(arr) / sizeof(int);
    // merge_sort(arr, 0, len - 1);
    // print_array("final array", arr, 0, len - 1);

    // with user interaction
    get_input();

    return 0;
}

void get_input(){
    printf("Enter length of array you want to sort(merge sort): ");
    int len = 0;
    scanf(" %d",&len);
    int * arr = (int *) malloc(sizeof(int) * len);
    for(int i = 0; i < len; i++){
        printf("Enter %d th element of array: ",i);
        scanf(" %d",& arr[i]);
    }
    merge_sort(arr, 0, len - 1);
    print_array("sorted array",arr, 0, len - 1);
}

void print_array(char* title, int *arr, int start, int end){
    printf("\n------------------\n%s\n--------------------\n",title);
    for(int i = start; i <= end; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
}

// this function will divide array into two parts for sorting
void merge_sort(int *arr, int start, int end){
    // if start value is small than end it means array contains at least one value
    if(start < end){
        int mid = start + (end - start) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void merge(int * arr, int start, int mid, int end){
    // getting length of new array that we will work in this function
    int len = end - start + 1;
    // creating space in memory for new array
    int *merged = (int *) malloc(sizeof(int) * len);

    // indexing for parts of array
    int i1 = start;
    int i2 = mid + 1;
    int x = 0;

    // logic to merge array parts   
    while(i1 <= mid && i2 <= end ){
        if(arr[i1] <= arr[i2]){
            merged[x++] = arr[i1++];
        }else{
            merged[x++] = arr[i2++];
        }
    }

    // both of while loop won't run but
    // either none of while loop will run or only one of while loop will execute
    while (i1 <= mid)
    {
        merged[x++] = arr[i1++];   
    }
    while(i2 <= end){
         merged[x++] = arr[i2++];
    }

    // updating value of original array
    for(int i = 0, j = start; i < len; i++ , j++){
        arr[j] = merged[i];
    }

}