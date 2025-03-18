#include <stdio.h>
#include <stdlib.h>
#include "rectangle.h"

Rectangle * createRectangle(void)
{
    Rectangle *recPtr = malloc(sizeof(Rectangle));
    if (!recPtr) return NULL;
    return recPtr;
}

Rectangle * createRectangle2(Point p)
{
    Rectangle *recPtr = malloc(sizeof(Rectangle));
    if (!recPtr) return NULL;
    recPtr->origin = p;
    return recPtr;
}

Rectangle * createRectangle3(int w, int h)
{
    Rectangle *x = malloc(sizeof(Rectangle));
    if (!x) return NULL;
    x->height = h;
    x->width = w;
    return x;
}

Rectangle * createRectangle4(Point p, int w, int h)
{
    Rectangle *rec = malloc(sizeof(Rectangle));
    rec->origin = p;
    rec->height = h;
    rec->width = w;
    return rec;
}

void move(Rectangle *r, int x, int y)
{
    r->origin.x = x;
    r->origin.y = y;
}

int getArea(const Rectangle *r)
{
    return r->height * r->width;
}