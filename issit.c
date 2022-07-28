#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void pixel(int xc,int yc,int x,int y)
{

putpixel(xc+x,yc+y,15);
putpixel(xc+x,yc-y,15);
putpixel(xc-x,yc+y,15);
putpixel(xc-x,yc-y,15);
putpixel(xc+y,yc+x,15);
putpixel(xc+y,yc-x,15);
putpixel(xc-y,yc+x,15);
putpixel(xc-y,yc-x,15);
}


int main()
{
   int gd = DETECT, gm;
   int x,y,xc,r,yc,p,i;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   printf("\n\t1.Happy\n\t2.sad\n\t3.neutral\n\t4.Angry ");
x=0;
r=25;
xc=50;
yc=100;
y=r;
p=1-r;

   do
   {
   printf("\n\n\n Enter your mood:");
   scanf("%d",&i);
   cleardevice();
   switch(i)
   {
     case 1:
     {

 x=0;
r=25;
xc=50;
yc=100;
y=r;
p=1-r;
pixel(xc, yc,x, y);

while(x<y)
{
if(p<0)
{
x++;
p=p+2*x+1;
}
else
{
x++;
y--;
p=p+2*(x-y)+1;
}
pixel(xc,yc,x,y);
}




       fillellipse(44,85,2,6);
       fillellipse(56,85,2,6);

       ellipse(50, 100, 205, 335, 20, 9);
       ellipse(50, 100, 205, 335, 20, 10);
       ellipse(50, 100, 205, 335, 20, 11);
       break;
     }
     case 2:
     {
       x=0;
r=25;
xc=50;
yc=100;
y=r;
p=1-r;
       pixel(xc, yc,x, y);
       while(x<y){
if(p<0)
{
x++;
p=p+2*x+1;
}
else
{
x++;
y--;
p=p+2*(x-y)+1;
}
pixel(xc,yc,x,y);
}



       fillellipse(44, 85, 2, 6);
       fillellipse(56, 85, 2, 6);

       ellipse(50, 110, 0, 170, 20, 9);
       ellipse(50, 110, 0, 170, 20, 10);
       ellipse(50, 110, 0, 170, 20, 11);
       break;

     }
     case 3:
     {

       x=0;
r=25;
xc=50;
yc=100;
y=r;
p=1-r;
       pixel(xc, yc, x,y);
     while(x<y){
if(p<0)
{
x++;
p=p+2*x+1;
}
else
{
x++;
y--;
p=p+2*(x-y)+1;
}
pixel(xc,yc,x,y);
}


       fillellipse(44, 85, 2, 6);
       fillellipse(56, 85, 2, 6);

       ellipse(50, 100, 255, 290, 20, 9);
       ellipse(50, 100, 255, 290,20, 10);
       ellipse(50, 100, 255, 290,20, 11);
       break;
     }
      case 4:
     {

       x=0;
r=25;
xc=50;
yc=100;
y=r;
p=1-r;
       pixel(xc, yc, x,y);
while(x<y){
if(p<0)
{
x++;
p=p+2*x+1;
}
else
{
x++;
y--;
p=p+2*(x-y)+1;
}
pixel(xc,yc,x,y);
}

       fillellipse(44, 85, 2, 6);
       fillellipse(56, 85, 2, 6);

       ellipse(50, 114, 25, 160, 20, 9);
       ellipse(50, 114, 25, 160,20, 10);
       ellipse(50, 114, 25, 160,20, 11);
       break;
     }
   }
 }while(i!=5);

   return 0;
}