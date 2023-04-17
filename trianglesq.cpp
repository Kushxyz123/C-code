#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 
void main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "c:\\tc\\bgi");
 
   line(300, 100, 200, 200);
   line(300, 100, 400, 200);
   line(200, 200, 400, 200);
   line(200, 200, 200, 100);
   line(400, 200, 400, 100);
   line(200, 100, 400, 100);
 
   getch();
   closegraph();
}