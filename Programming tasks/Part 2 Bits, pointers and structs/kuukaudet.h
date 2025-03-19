#ifndef BITIT_H
#define BITIT_H

typedef enum{
    TAMMIKUU, HELMIKUU, MAALISKUU, HUHTIKUU, TOUKOKUU, KESAKUU, HEINAKUU, ELOKUU, SYYSKUU, LOKAKUU, MARRASKUU, JOULUKUU , KK_LKM
} kuukaudet;

const char *KK_NIMET[KK_LKM];
const char KK_PAIVAT[2][KK_LKM];

int karkausvuosi(int y);
int parseEnum(const char *monthName);
char kkPituus(const char* monthName, int y);

#endif