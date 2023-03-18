#include <stdio.h>
#include <time.h>

int main() {
    char text[1000];
    int i = 0;
    float avg_time;
    clock_t start_time, end_time;
    double typing_time;

    printf("\n\e[1mType:\e[m ");
    start_time = clock();
    while ((text[i] = getchar()) != '\n') {
        ++i;
    }

    text[i] = '\0';

    end_time = clock();
    typing_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    avg_time = i / typing_time;

    printf("\n//////////////////////////////////////////////////////////////////////////////////////////////");
    printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n\t\t\e[1mRESULTS\e[m\n");
    printf("What you typed: \e[1m%s\e[m\n\nYou typed \e[1m%d\e[m characters in \e[1m%.2f\e[m seconds.\n", text, i, typing_time); 
    printf("Your typing speed is approximately \e[1m%.0f\e[m characters per second.\n", i / typing_time);

    if(avg_time <= 4) {
        printf("\e[1mLevel:\e[m You need some work!\n\n");
    }else if(avg_time < 7) {
        printf("\e[1mLevel:\e[m Amateur\n\n");
    }else if(avg_time <= 9) {
        printf("\e[1mLevel:\e[m Intermediate\n\n");
    }else if(avg_time <= 12) {
        printf("\e[1mLevel:\e[m Pro\n\n");
    }else {
        printf("\e[1mLevel:\e[m GODLIKE\n\n");
    }

    //TODO na balw ena if pou panw apo 10-12 characters na grafei Congrats you are a fast typer. apo 7-9 na einai medium typer kai katw apo 7 na einai amateur typer

    return 0;
}