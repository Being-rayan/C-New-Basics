// convert meters into km and meters.
#include <stdio.h>
int main () {
    int km,m;
    printf("enter the distance into meters:");
    scanf("%d",&m);
    km=m/1000;
    m=m%1000;
    printf("%d km and %d m",km,m);
    return 0;
}