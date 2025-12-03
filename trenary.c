#include<stdio.h>
int main(){
    int a,b,c,high;
    printf("Enter three numbers with space seperated : ");
    scanf("%d%d%d",&a,&b,&c);
    high = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d",high);
    return 0;
}