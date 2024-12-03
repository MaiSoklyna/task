#include <graphics.h>
#include <conio.h>
int main()
{
     int gd = DETECT, gm;
     initgraph(&gd, &gm, (char *)"");

     ellipse(300, 180, 0, 360, 200, 80);
     getch();
     closegraph();
}