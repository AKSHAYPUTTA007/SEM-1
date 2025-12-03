#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers with space separation : ");
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d %d-%d=%d",a,b,a+b,a,b,a-b);
}