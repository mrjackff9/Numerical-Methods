//Regula Falsi method
#include <iostream>
#include <math.h>
float f (float x)
{
    return (x*x*x-9*x+1);
}
int main()
{
    float a,b,c,d,e;
    int k = 0;
    do
    {
        printf("\nEnter the value of a and b: ");
        scanf("%f\t%f", &a, &b);
    }
    while (f(a)*f(b)>0);
    printf("\nEnter accuracy: ");
    scanf("%f", &e);
    do
    {
        c= a-(f(a)*(a-b))/(f(a)-f(b));
        printf("\nk=%d\ta=%f\tb=%f\tc=%f\tf(c)=%f", k, a, b, c, f(c));
        if(f(a)*f(c) < 0)
        b = c;
        else
        a = c;
        k = k+1;
    }
    while (fabs(f(c)) > e);
    printf("\n");
    printf("\nIteration=%d\tRoot=%f", k, c);
}