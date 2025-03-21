#include "tetris.h"
#include <stdlib.h>
#include <stdio.h>

void paivita(char grid[20][10])
{
    int i, j, z, x;

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 10; j++) {
            if (grid[i][j] == ' ') break;
            if (j == 9) {
                /* full row*/
                for (z = i; z > 0; z--) {
                    for (x = 0; x < 10; x++) {
                        if (z == 1) {
                            grid[z][x] = ' ';
                            continue;
                        }
                        grid[z][x] = grid[z - 1][x];
                    }
                }
            }
        }
    }
}
