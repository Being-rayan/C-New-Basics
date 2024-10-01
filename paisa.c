//convert paisa into rupees.
#include<stdio.h>
int main () {
    int paisa,paise,rupees;
    printf("enter the paisa:");
    scanf("%d",&paisa);
    rupees=paisa/100;
    paise=paisa%100;
    printf("after converting:%d rupees and %d paise",rupees,paise);
    return 0;
}