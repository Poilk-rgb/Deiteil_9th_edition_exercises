#include <stdio.h>

int time_after_12(int, int, int);

int main(void){
    int hours1 = 15;
    int minutes1 = 34;
    int seconds1 = 56;
    int hours2 = 18;
    int minutes2 = 27;
    int seconds2 = 13;
    printf("%d\n", time_after_12(hours1, minutes1, seconds1));
    printf("%d\n", time_after_12(hours2, minutes2, seconds2));
    printf("%d", time_after_12(hours1, minutes1, seconds1) - time_after_12(hours2, minutes2, seconds2));
}

int time_after_12(int hours, int minutes, int seconds){
    if(hours < 12){
        seconds += (hours * 3600);
    } else {
        hours -= 12;
        seconds += (hours * 3600);
    }
    seconds += (minutes * 60);
    return seconds;
}
