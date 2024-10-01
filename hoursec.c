//convert seconds into hours, min and seconds.
#include<stdio.h>
int main() {
    int sec,min,hr;
    printf("enter the seconds:");
    scanf("%d",&sec);
    min=sec/60;     //       / --> quotient
    hr=min/60;
    sec=sec%60;
    min =min%60; // key logic (hold remaining mins after converting into hr eg. 60 mins = 1 hr)
    printf("%d hours, %d min and %d sec",hr,min,sec); //       % --> remainder
return 0;
}