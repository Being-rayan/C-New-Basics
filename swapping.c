// swapping of 2 numbers using a 3rd variable.
#include<stdio.h>
int main () {
    int a,b,temp;
    printf("enter the first no:");
    scanf("%d",&a);
    printf("enter the second no:");
    scanf("%d",&b);
    temp=a; //logic
    a=b;
    b=temp;
    printf("after swapping:%d %d",a,b);
    return 0;

}