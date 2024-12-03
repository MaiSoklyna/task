#include <graphics.h>
#include <conio.h>
int main()
{
     int gd = DETECT, gm;
     initgraph(&gd, &gm, (char *)"");

     circle(200, 150, 25);
     circle(200, 150, 25);
     circle(300, 250, 25);
     circle(300, 250, 25);
     getch();
     closegraph();
}