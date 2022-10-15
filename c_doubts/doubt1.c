// Q1. what will be output?
/*
    ------------------------------------------------------
    my doubt: 
    here the output should be 101 but it is 111 checked from compiler.
    as far as I know unary operator (increment and decrement) has more priority order than logical AND (&&) than logical OR (||) respectively
    but in this program (--j) is being ignored not even executed other wise output should be 101.
    how and why?
    ------------------------------------------------------
*/
/*
    +++++++++++++++++++++++++++++++++++++++++++++++++++++++
    answer: unknown
    +++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

#include<stdio.h>

int main(){
    int i = 0, j = 1, k = 0;
    k = i++ && --j || ++k;
    printf("%d%d%d",i,j,k);
    return 0;
}