// program to alter the nth bit of number

#include<stdio.h>

#define BITS sizeof(int) * 8

void show_bit_of_number(int num);

int main(){
    int num, pos, bit, res;
    // get input from user
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter nth pos of bit (0 - 31): ");
    scanf("%d",&pos);
    printf("Enter bit that you want to set: ");
    scanf("%d",&bit);


    // logic to set bit value
    // if num = 1010, if pos = 1, so part 1 will be 1000, part2 = 10, part3 = 0,
    // spliting number before and after nth bit
    int part1, part2, part3, temp;
    part1 = num >> pos + 1;
    part1 <<= pos + 1;

    part2 = num - part1;

    temp = part2 >> pos;
    temp <<= pos;
    part3 = part2 - temp;

    // nth bit 
    int a = (bit & 1) << pos;
    
    // recombining number
    res = part1 + part3 + a;

    printf("\nBit value of %d: ",num);
    show_bit_of_number(num);

    printf("\nFinal number after bit alteration is %d: ",res);
    show_bit_of_number(res);

    printf("\n");

    return 0;
}

void show_bit_of_number(int num){
    int bit;
    for(int i = BITS-1; i >= 0; i--){
        bit = num >> i;
        printf("%d",bit & 1);
    }
}

