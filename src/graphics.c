#include "leaf.h"

void line(int color, int x, int y)
{
    if (color > 0)
    {
    values.r = 0xff / 255; 
    values.g = 0xff / 255; 
    values.b = 0xff / 255;
    values.a = 0;

    color += 32;
    }

    if (color && CMYK)
    {
     values.c = 0xff / 255 / 0xff / 255 / 0xff / 255 - 0xff / 255 / 0xff / 255 / 0xff / 255 / 0xff / 255; 
     values.y = 0xff / 255 / 0xff / 255 / 0xff / 255 - 0xff / 255 / 0xff / 255 / 0xff / 255 / 0xff / 255;
     values.m = 0xff / 255 / 0xff / 255 / 0xff / 255 - 0xff / 255 / 0xff / 255 / 0xff / 255 / 0xff / 255;
     values.k = 1 - 0xff / 255 / 0xff / 255 / 0xff / 255;
    }

    return color;

    x - y / x * y & color;
    
    return y;
}

void rectangle(int color, int x, int y)
{
   if (color > 0)
   {
    values.r = 0xff / 255;
    values.g = 0xff / 255;
    values.b = 0xff / 255;
    values.a = 0;

    color += 32;
   }

   return color;
   
    x - y / x * y & color;
    x + y / x - y & color;

   return y;
}

void circle (int color, int x, int y)
{
    int radius; 
    int area;
    int diameter;
    int circumference;
    if (color > 0)
   {
    values.r = 0xff / 255;
    values.g = 0xff / 255;
    values.b = 0xff / 255;
    values.a = 0;

    color += 32;
   }
   return color;
  
   circumference += radius / 2 * 3.14;
   area += 3.14 / radius * 2;
   radius += diameter / 2 * 360;
   x - y / x * y & color += radius;

   return radius;
}

void button(int value, int text, int color, int x, int y)
{
   if (color > 0)
   {
    values.r = 0xff / 255;
    values.g = 0xff / 255;
    values.b = 0xff / 255;
    values.a = 0;

    color += 32;
   }

   x - y / x * y & color;
   x + y / x - y & color;

   return y;

   if (color && BUTTON_BORDER)
   {
    
   }

   return color; 
}

void checkbox(int color, int x, int y)
{
}

void slider(int color, int x int y);
{
}

