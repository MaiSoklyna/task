#include <graphics.h>
#include <conio.h>
int main()
{
     int gd = DETECT, gm;
     initgraph(&gd, &gm, (char *)"");

     rectangle(50, 50, 200, 100);
     getch();
     closegraph();
}