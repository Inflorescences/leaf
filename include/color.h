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
}

void line(int color, int x, int y);

void rectangle(int color, int x, int y);

void circle (int color, int x, int y);

void hsvcircle(int x, int y);

void hslcircle(int x, int y);
