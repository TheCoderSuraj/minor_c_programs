#include<stdio.h>
#include<string.h>
void upperBody(int n){
    int gp1 = (n + 1)/2 -1, en = 1 + 2;
    int i, j;
    for(i = 0; i < (n + 1)/2 - 1; i++){
        for(j = 0; j < gp1; j++){
            printf(" ");
        }
        for(j = 0; j <  en; j++){
            printf("*");
        }
            printf(" ");
        for(j = 0; j < (gp1 -1)* 2; j++){
            printf(" ");
        }
        for(j = 0; j <  en; j++){
            printf("*");
        }
        en += 2;
        gp1 --;
        printf("\n");
    }
}

void printName(char name[], int n){
    int t = (n+ 1) * 2 + 1,i;
    int len = strlen(name), h = (t - len)/2;
    for(i = 0; i < t; i++) printf("*");
    printf("\n");
    
    if(len % 2 == 0) printf("*");
    for( i = 0; i < h; i++) printf("*");
    printf("%s",name);
    for( i = 0; i < h; i++) printf("*");
    printf("\n");
    
    // for( i = 0; i <= t; i++) printf("*");
}

void printRevPyramid(int n){
    // int gp =
    int t = n *2 + 1;

    for(int i = 0;i <= t/2;i++){
        for(int j = 0; j <= t-i;j++){
            if(j <= i) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
void love(){
    char  name[100];
    int n = 5, len;
    printf("\nEnter your lover's name: ");
    // fgets(name,100,stdin);
    scanf("%[^'\n']",name);
    len = strlen(name);
    if(len > (n-1)*2){
        n = len /2;
        n = (n % 2)?n :n+1;
    }
    upperBody(n);   
    printName(name,n);
    printRevPyramid(n);
}
int main(){
    love();
    printf("\n");   
    return 0;
}