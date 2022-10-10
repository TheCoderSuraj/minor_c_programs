// program to find maximum number of n numbers

#include <stdio.h>
#include<stdlib.h>
int main(){
    printf("Enter nth of number: ");
    int n;
    scanf("%d",&n);
    
    // creating dynamic int list of length as n (memory allocation)
    int *head;
    head = (int *) malloc(sizeof(n) * n);
    
    // getting input of for each values of int list
    for(int i = 0; i < n; i++){
        printf("Enter %d th number: ",i);
        scanf("%d",head+i);
    }
    
    // logic to check maximum number
    // -----------------------------------
    // first value of list is assigned to max then it's value is replaced by value which is greater 
    // than max value and repeated for all values in list using loop
    // -----------------------------------
    int max = *head;
    for(int i = 1; i < n; i ++){
        if(max <= *(head + i)){
            max = *(head +i);
        }
    }
    
    printf("The greatest number is %d\n",max);
    
    // free memory
    free(head);
    head = NULL;
    
    return 0;
}