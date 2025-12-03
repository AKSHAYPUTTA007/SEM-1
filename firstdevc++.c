#include<stdio.h>
int main(){
	int a;
	float b;
	double c;
	char name[50];
	printf("enter the value of a : ");
	scanf("%d",&a);
    printf("enter the float value of b : ");
	scanf("%f",&b);
	printf("enter the double value of c : ");
	scanf("%lf",&c);
	printf("enter your name : ");
	scanf("%s",&name);
	printf("the values you gave %d,%f,%lf,%s\n",a,b,c,name);
	printf("%d",sizeof(int));
	return 0;
}
