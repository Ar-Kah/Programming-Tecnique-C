#ifndef SIGNAALIT_H
#define SIGNAALIT_H

#include <setjmp.h>
#include <signal.h>

extern jmp_buf paluuTila;

void hoidaSIGFPE(int s);
void hoidaSIGSEGV(int s);

#endif