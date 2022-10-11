// program to find greatest among four numbers using if only

#include<stdio.h>

int main(){

    int a, b, c, d;
    printf("Enter any four numbers: ");
    scanf("%d%d%d%d",&a, &b, &c, &d);

    if(a > b){
        if(a > c){
            if(a > d){
                printf("the greatest number is a = %d",a);
            }else{
                printf("the greatest number is d = %d",d);

            }
        }else{
            if(c > d){
                printf("the greatest number is c = %d",c);
            }else{
                printf("the greatest number is d = %d",d);
            }
        }
    }else{
        if(b > c){
            if(b > d){
                printf("the greatest number is b = %d",b);
            }else{
                printf("the greatest number is d = %d",d);
            }
        }else{
            if(c > d){
                printf("the greatest number is c = %d",c);
            }else{
                printf("the greatest number is d = %d",d);
            }
        }
    }
    printf("\n");
    return 0;
}