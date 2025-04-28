#include "viikko.h"
#include<time.h>
#include<stdio.h>
#include<string.h>

void viikko(int pv, int kk, int vuosi)
{
    char buffer[100];
    int counter = 0;
    int paiva_siirto;
    struct tm tm_info = {0};
    tm_info.tm_year = vuosi - 1900;
    tm_info.tm_mon = kk -1;
    tm_info.tm_mday = pv;

    mktime(&tm_info);
    paiva_siirto = (tm_info.tm_wday == 0) ? -6 : (1 - tm_info.tm_wday);
    tm_info.tm_mday += paiva_siirto;
    mktime(&tm_info);
    while(1) {
        if (counter == 7) break;
        strftime(buffer, sizeof(buffer), "%A %d. %B %Y", &tm_info);
        printf("%s\n", buffer);
        tm_info.tm_mday++;
        mktime(&tm_info);
        counter++;
    }
}