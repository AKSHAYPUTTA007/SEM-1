#include<stdio.h>
#include<math.h>
#include<complex.h>
int main(){
    float A,B,C,root1,root2,dis;
    printf("if the quadratic eqs is A(X^2)+BX+C=0\n");
    printf("Enter A value : ");
    scanf("%f",&A);
    printf("Enter B value : ");
    scanf("%f",&B);
    printf("Enter c value : ");
    scanf("%f",&C);
    dis=(B*B)-(4*A*C);
    printf("%f",dis);
    if (dis>0){
        root1=(-B + sqrt(dis)) /2*A;
        root2=(-B - sqrt(dis)) /2*A;
        printf("root1 = %.2f and root2 = %.2f",root1,root2);
    }else if (dis=0){
        root1=root2=-B/2*A;
        printf("root1=root2=%.2f",root1);
    }else{
        
    }
}