#include<stdio.h>
int selfdividing(int num){
    int r,temp=num;
    for(temp=num;temp!=0;temp/=10){
        r=temp%10;
        if (r==0) return 0;
        if (num%r!=0) return 0;
    }
    return 1;
}
int main(){
    int a,b,num;
    scanf("%d %d",&a,&b);
    for(num=a;num<=b;num++){
        if(selfdividing(num)) printf("%d ",num);
    }
}
