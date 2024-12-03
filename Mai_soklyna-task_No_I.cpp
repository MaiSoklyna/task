#include <graphics.h>
#include <conio.h>
int main()
{
     int gd = DETECT, gm;
     initgraph(&gd, &gm, (char *)"");
     line(0, 0, 0, 1366);
     line(0, 0, 768, 0); // Mai oklyna
     getch();
     closegraph();
}
