#include <graphics.h>
#include <conio.h>
int main()
{
     int gd = DETECT, gm;
     initgraph(&gd, &gm, (char *)"");

     rectangle(50, 50, 200, 100);

     ellipse(400, 100, 0, 360, 150, 50);
     circle(200, 150, 25);

     getch();
     closegraph();
}