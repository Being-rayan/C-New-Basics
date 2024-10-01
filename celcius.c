// find the temperature in celcius.
#include<stdio.h>
int main () {
    float cel,far;
     printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&far);
    cel=(far-32)*(5.0/9.0);
    printf("%.2f",cel);
    return 0;
}