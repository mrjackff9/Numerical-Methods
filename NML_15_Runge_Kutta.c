//Runge Kutta method order of 4
#include <math.h>
#include <stdio.h>
float f(float x, float y)
{
    float f;
    f = x/y;
    return (f);
}
int main()
{
    int i, n;
    float x0, y0, xn, h, k, k1, k2, k3, k4;
    printf("Enter the value of x0, y0, xn and h: ");
    scanf("%f %f %f %f", &x0, &y0, &xn, &h);
    n = (xn-x0)/h;
    for (i=1; i<=n; i++)
    {
        k1 = h*f(x0, y0);
        k2 = h*f(x0+h/2.0, y0+k1/2.0);
        k3 = h*f(x0+h/2.0, y0+k2/2.0);
        k4 = h*f(x0+h, y0+k3);
        k = (k1+2*k2+2*k3+k4)/6.0;
        x0 = x0+h;
        y0 = y0+k;
        printf("\nThe value of y=%f at x=%f", y0, x0);
    }
}