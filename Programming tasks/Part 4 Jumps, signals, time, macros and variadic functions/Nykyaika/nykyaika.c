#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) {
    time_t timer;
    struct tm *tm_info;
    char *weekdays[] = {"Sunnuntai", "Maanantai", "Tiistai", "Keskiviikko", "Torstai", "Perjantai", "Lauantai"};

    timer = time(NULL);
    
    tm_info = localtime(&timer);


    printf("%s %02d.%02d.%04d klo %02d:%02d\n",
           weekdays[tm_info->tm_wday],  
           tm_info->tm_mday,            
           tm_info->tm_mon + 1,         
           tm_info->tm_year + 1900,     
           tm_info->tm_hour,            
           tm_info->tm_min);            

    return 0;
}
