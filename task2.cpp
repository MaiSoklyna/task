#include<graphics.h>
#include<conio.h>
int main ()
{
  int gd = DETECT, gm;
  initgraph (&gd, &gm, "");
  line (100, 150 ,200, 150);
  circle (100, 150, 25);
  circle(200, 150, 25);
  getch () ;
  closegraph () ;
}
