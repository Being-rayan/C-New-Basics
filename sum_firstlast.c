//sum of the first and the last digit of a 6 digit user input digit.
#include<stdio.h>
int main () {
    int sum,num;
    printf("Enter the 6 digit number");
    scanf("%d",&num);
    sum=(num/100000)+(num%10); // (num%10) last digit dega.
    printf("%d",sum);
    return 0;
}