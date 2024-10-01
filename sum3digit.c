// sum of all the 3 digits of a 3 digit number. eg:123=1+2+3=6
#include<stdio.h>
int main () {
    int sum=0,num;
    printf("enter a 3 digit number:");
    scanf("%d",&num);
sum=(num/100)+(num%10)+(num/10%10); //(num/10%10) for middle digit.
printf("sum is :%d",sum);
return 0;
}