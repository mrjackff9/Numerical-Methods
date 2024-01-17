//Euler method
#include <math.h>
#include <stdio.h>
float f(float x, float y)
{
    float f;
    f = x + y;
    return (f);
}
int main()
{
    float x, y, xn, h;
    printf("Enter the value of x0, y0, xn and h: ");
    scanf("%f %f %f %f", &x, &y, &xn, &h);
    do
    {
        printf("\nThe value of y=%f at x=%f", y, x);
        y = y+h*f(x,y);
        x = x+h;
    }
    while (x <= xn);
}