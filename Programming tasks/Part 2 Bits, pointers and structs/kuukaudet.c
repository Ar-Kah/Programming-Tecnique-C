#include "kuukaudet.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

const char *KK_NIMET[KK_LKM] = {
    "tammikuu", "helmikuu", "maaliskuu", "huhtikuu", "toukokuu",
    "kesakuu", "heinakuu", "elokuu", "syyskuu", "lokakuu",
    "marraskuu", "joulukuu"
};

const char KK_PAIVAT[2][KK_LKM] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int karkausvuosi(int y)
{
    return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ? 1 : 0;
}

int parseEnum(const char *monthName) {
    int i;
    for (i = 0; i < KK_LKM; i++) {
        if (strcmp(monthName, KK_NIMET[i]) == 0) return i;
    }
    return -1;
}

char kkPituus(const char *monthName, int y)
{
    int i, monthIndex;
    char month[20];
    for (i = 0; i < strlen(monthName); i++) {
        month[i] = tolower(monthName[i]);
    }
    month[i] = '\0';
    monthIndex = parseEnum(month);
    if (monthIndex == -1) {
        return -1;
    }
    return KK_PAIVAT[karkausvuosi(y)][monthIndex];
}
