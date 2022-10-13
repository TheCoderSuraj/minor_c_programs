// solution to quadratic soln

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,root1,root2,disc, img, real;//discriminant square root
    printf("To find root of quadratic eqn 'Ax^2 + Bx + c = 0'\nEnter value of A, B, C respectively: ");
    scanf("%f%f%f",&a,&b,&c);

    disc = b*b - 4*a*c;
    
    if(disc > 0){
        root1 = (-b + sqrt(disc))/ (2 * a);
        root2 = (-b - sqrt(disc))/(2 * a);

        printf("root1 is %.2f and root2 is %.2f",root1, root2);
    }else if(disc == 0){
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2f",root1);
    }else{
        real = -b / (2 * a);
        img = sqrt(- disc)/(2 *a);
        printf("root1 = %.2f + %.2fi and root2 = %.2f - %.2fi",real,img,real,img);
    }
    printf("\n");

    return 0;
}