//Modified Eular method
#include <math.h>
#include <stdio.h>
float f(float x, float y)
{
    float f;
    f = x+y;
    return (f);
}
int main()
{
    int i, n;
    float x0, y0, xn, h, x, x1, y, y1, y2, e;
    printf("Enter the value of x0, y0, xn, h and e: ");
    scanf("%f %f %f %f %f", &x0, &y0, &xn, &h, &e);
    do
    {
        y1 = y0+h*f(x0, y0);
        do
        {
            y2 = y1;
            y1 = y0+h*(f(x0, y0)+f(x0+h, y2))/2.0;
            //printf("\n\tThe value of y=%f at x=%f", y1, x0);
        } while (fabs(y1-y2) > e);
        x0 = x0+h;
        y0 = y1;
        printf("\nThe value of y=%f at x=%f", y0, x0);
    } while (x0 <= xn);
}