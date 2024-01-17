//Bisection method
#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (x*x*x-9*x+1);
}
int main()
{
    float a, b, c, e;
    int k = 0;
    printf("\nEnter  accuracy: ");
    scanf ("%f", &e);
    do
    {
        printf("\nEnter interval a, b: ");
        scanf("%f%f", &a, &b);
    }
    while (f(a)*f(b) > 0.0);
    do
    {
        c = (a + b) / 2.0;
        printf("\nk=%d\ta=%f\tb=%f\tc=%f\tf(c)=%f", k, a, b, c, f(c));
        if (f(a)*f(c) < 0.0)
        b = c;
        else
        a = c;
        k = k + 1;
    }
    while (fabs(f(c)) > e);
    printf("\n");
    printf("\nRoot of the equition is %f", c);
    printf("\nNo of iteration required %d", k);
    return 0;
}