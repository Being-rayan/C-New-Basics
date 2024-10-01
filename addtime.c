// Add the times
#include <stdio.h>

int main() {
    int hr, min, sec, hr2, min2, sec2;
    int total_hr, total_min, total_sec;

    printf("Enter the 1st time (HH:MM:SS): ");
    scanf("%d:%d:%d", &hr, &min, &sec);

    printf("Enter the 2nd time (HH:MM:SS): ");
    scanf("%d:%d:%d", &hr2, &min2, &sec2);
    total_sec = sec + sec2;
    total_min = min + min2 + total_sec / 60;
    total_hr = hr + hr2 + total_min / 60;
    total_sec %= 60;
    total_min %= 60;

    printf("Total time is: %02d:%02d:%02d\n", total_hr, total_min, total_sec);

    return 0;
}
