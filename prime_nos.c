#include <stdio.h>
#define pie = 3.14
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }56
    return 1;
}
int main(){
    int a=2,x=0,n;
    int prime_nos[500];
    printf("enter how many prime no.s you want : ");
    scanf("%d",&n);
    if (n<0){
        printf("invalid input!");
    }
    else if(n>500){
            printf("sorry our limit is 500");
    }   
    
    else{
        while (x<n){
            if (isPrime(a)){
                prime_nos[x]=a;
                printf("%d\n",a);
                a+=1;
                x+=1;
            }
            else{
                a+=1;
         }
        }
    }
return 0;
}