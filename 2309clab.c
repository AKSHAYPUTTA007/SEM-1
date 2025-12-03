#include<stdio.h>
int main(){
    int a;
    float b;
    char c[1];
    char d[50];
    printf("enter an int : ");
    scanf("%d",&a);
    printf("enter a float value : ");
    scanf("%f",&b);
    printf("enter a character : ");
    scanf("%s",c);
    printf("enter a string : ");
    scanf("%s",d);
    printf("%d\n%.1f\n%s\n%s",a,b,c,d);
}