#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "signaalit.h"

int main() {
    char rivi[100];
    int *taulu = NULL;
    unsigned int koko = 0;
    unsigned int lkm = 0;
    int a, b, arvo;
    unsigned int i;

    signal(SIGFPE, hoidaSIGFPE);
    signal(SIGSEGV, hoidaSIGSEGV);

    while (fgets(rivi, sizeof(rivi), stdin) != NULL) {
        switch (setjmp(paluuTila)) {
            case 0:
                if (sscanf(rivi, "lisää %d %d", &a, &b) == 2) {
                    if (lkm >= koko) {
                        koko = koko == 0 ? 1 : koko * 2;
                        taulu = realloc(taulu, koko * sizeof(int));
                        if (taulu == NULL) {
                            fprintf(stderr, "Muistin varaus epäonnistui.\n");
                            return 1;
                        }
                    }
                    arvo = a / b;
                    taulu[lkm++] = arvo;
                } else if (sscanf(rivi, "tulosta %u", &i) == 1) {
                    printf("%d\n", taulu[i]);
                } else if (strncmp(rivi, "tulosta", 7) == 0) {
                    for (i = 0; i < lkm; i++) {
                        printf("%d", taulu[i]);
                        if (i < lkm - 1) {
                            printf(" ");
                        }
                    }
                    printf("\n");
                } else {
                    break;
                }
                break;
                
            case SIGFPE:
                printf("Aiheutui signaali SIGFPE\n");
                break;
                
            case SIGSEGV:
                printf("Aiheutui signaali SIGSEGV\n");
                break;
                
            default:
                printf("Aiheutui signaali UNKNOWN\n");
                break;
        }
    }

    free(taulu);
    
    return 0;
}