#include<stdio.h>
int main{
    int a,b;
    printf("enter a,b");
    scanf("%d %d",&a,&b);
    for (int i=1;i<=b;i++) a+=a;
    printf("%d",a);
}