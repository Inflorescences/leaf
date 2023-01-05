#define HSL
#define HSV
#define RGBA
#define CMYK
#define BUTTON_BORDER


typedef struct values
{
    int r;
    int g;
    int b;
    int a;
    
    int c;
    int m;
    int y;
    int k;
} values;

void line(int color, int x, int y);

void rectangle(int color, int x, int y);

void circle(int color, int x, int y);

void triangle(int color, int x, int y);

void square(int color, int x, int y);

void hexagon(int color, int x, int y);

void button(int value, int text, int color, int x, int y);

void checkbox(int color, int x, int y);

void slider(int color, int x, int y);
