#include "color.h"

/* 0xFF0000 is 255, 0, 0 */ /* divide 255 */ /* 0.0 */ /* RRGGBB */ /* RGBA8888 */ /* ARGB8888 */

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
   radius += diameter / 2 * 360;
   x - y / x * y & color += radius;

   return radius;
}

