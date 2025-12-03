#include<stdio.h>
int main(){
    int temp,n,rev=0,r;
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        r=temp%10;
        rev=(rev*10)+r;
        temp/=10;
    }
    printf("%d",rev);
}
