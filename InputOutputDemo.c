#include<stdio.h>
int main(){
    int int1;
    float float1;
    char char1,string1[1000],string2[1000];
    printf("Enter a integer : ");
    scanf("%d",&int1);
    printf("Enter a floating point number : ");
    scanf("%f",&float1);
    printf("Enter a character : ");
    scanf(" %c",&char1);
    printf("Enter a string ");
    scanf(" %s",string1);
    printf("Enter a line of text: ");
    scanf(" %[^\n]", string2); 
    printf("%d\n%f\n%c\n%s\n%s",int1,float1,char1,string1,string2);
    return 0;
}