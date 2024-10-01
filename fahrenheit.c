// find Fahrenheit for a given centigrade temperature.
#include<stdio.h>
int main () {
    float cel,far;
    printf("Enter the temperature in celcius:");
    scanf("%f",&cel);
    far=cel*(9.0/5.0)+32; //formula
    printf("After conversion the temperature is: %.2f",far);
    return 0;
}