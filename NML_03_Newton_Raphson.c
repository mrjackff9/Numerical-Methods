//Newton Raphson's method
#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (x*x*x-x-1);
}
float df(float x)
{
    return (3*x*x-1);
}
int main()
{
    float a,b,c,e;
    int k = 0;
    printf("Enter accuracy: ");
    scanf("%f",&e);
    do
    {
        printf("Enter interval a, b: ");
        scanf("%f\t%f", &a, &b);
    }
    while (f(a)*f(b) > 0.0);
    c = (a+b)/2;
    do 
    {
        c = c-(f(c)/df(c));
        printf("\nk=%d\tc=%f\tf(c)=%f", k, c, f(c));
        k=k+1;
    }
    while (fabs(f(c)) > e);
    printf("\n");
    printf("\nRoot of the equition %f", c);
    printf("\nNo of iteration %d", k);
}