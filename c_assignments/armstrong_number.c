#include<stdio.h>
#include<math.h>

int main(){
    int m, n, cnt, cur, digit, sum;

    printf("Enter lower and upper limit: ");
    scanf("%d %d",&m, &n);

    printf("Arm-strong numbers between %d to %d are:\n",m,n);
    for(int i = m; i <= n; i++){
        cnt = log10(i) + 1;
        cur = i;
        sum = 0;
        while(cur > 0){
            digit = cur % 10;
            sum += (int) pow(digit, cnt);
            cur /= 10;
        }
        if(sum == i){
            printf(" %d,",i);
        }

    }

    printf("\n");

    return 0;
}