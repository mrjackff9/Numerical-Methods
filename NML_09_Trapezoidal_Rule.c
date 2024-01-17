//Trapezoidal Rule
#include <math.h>
#include <stdio.h>
float f(float x)
{
    float f;
    f = (x+1/x);
    return (f);
}
int main()
{
    float a, b, h, trap;
    int n, k;
    printf("Value of a, b, n: ");
    scanf("%f%f%d", &a, &b, &n);
    h = (b-a)/n;
    trap = f(a) + f(b);
    for(k=1; k<n; k++)
    {
        trap = trap + 2 * f(a+h*k);
    }
    trap = trap*h/2;
    printf("\nResult = %f", trap);
}