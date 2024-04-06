#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <conio.h>
#include<cmath>
#include<windows.h>


int words=1, wpm, i=0;
float seconds;
clock_t start,finish;
char str[100000];
char c;

int main(){
    printf("\t\tTyping speed test\t\t\t\t\tMCH170\n\nTime starts when you press your first key (except SHIFT and CAPSLOCK) and stops with ENTER\n");
    do{}while(!kbhit());
    printf("\nTime has started!\n\n");
    start=clock();
    gets(str);
    finish=clock();
    seconds=float(finish-start)/CLOCKS_PER_SEC;
    while(str[i]!='\0'){
        if (str[i]==' ')
            words++;
        i++;
    };
    wpm=round(words*60/seconds);
    printf("\n\n\n\nResults: %d WPM\n\nWords: %d\tTime: %.2f seconds\n", wpm, words, seconds);
    Sleep(5);
    printf("Press any key to exit:");
    do{}while(!kbhit());
    return 0;
}
