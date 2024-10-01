//reverse of a 3 digit number.
#include<stdio.h>
int main () {
    int num,rev1,rev2,rev3;
    printf("enter the 3 digit number:");
    scanf("%d",&num);
    rev1=(num/100); //1st
    rev2=(num%10); //3rd
    rev3=(num/10%10); //2nd
    printf("the reversed order is :%d%d%d",rev2,rev3,rev1);
    return 0;
}