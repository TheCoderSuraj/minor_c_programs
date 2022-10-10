// guess my number

#include<stdio.h>

int get_user_interaction(int value);
int get_middle(int lower, int upper);


int main(){
    int lower = 0, upper = 100, num = 0;
    int is_right = 0;
    printf("\nSeriously I am going to guess your number... \njust follow my commands...");
    printf("\nPlease guess one number from %d to %d.",lower,upper);
    printf("\nEnter any enter to continue...");
    getchar();
    int result = 0;
    while(!is_right){

        num = get_middle(lower,upper);
        // will show extreme values as result if all values are cancelled
        if(num == lower || num == upper){
            result = 1;
        }else{
            result = get_user_interaction(num);
        }
        // specific logic based on if number is less, equal or more
        switch(result){
            case 0:
            upper = num;
            break;
            case 1: printf("\nLook! I got your number, i.e. %d",num);
            is_right = 1;
            break;
            case 2:
            lower = num;
            break;
            default:
            printf("Invalid input");
        }
    }
    printf("\n");
}

// get if number is less, equal or more
int get_user_interaction(int value){
    printf("\n--->Is your number %d. Please say \n0 for less, \n1 for equal and \n2 for more: ",value);
    int result;
    scanf(" %d", &result);
    return result;
}

// get middle value
int get_middle(int lower, int upper){
    if(lower == upper - 1){
        return upper;
    }
    return (lower + upper)/2;
}