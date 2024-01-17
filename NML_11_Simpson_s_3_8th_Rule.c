//Simpson's 3/8 rule
#include <math.h>
#include <stdio.h>
float f(float x)
{
    float f;
    f = 1/(1+x*x);
    return (f);
}
int main()
{
    float a, b, h, simp;
    int n, i;
    printf("Enter the value of a, b, n: ");
    scanf("%f %f %d", &a, &b, &n);
    h = (b-a)/n; //height
    simp = f(a) + f(b);
    for (i=1; i<n; i++)
    {
        if (i%3 == 0) //if divisible by 3
        {
            simp = simp+2*f(a+h*i);
        }
        else //if not divisible by 3
        {
            simp = simp+3*f(a+h*i);
        }
    }
    simp = (simp*3*h)/8;
    printf("\nThe result is: %f", simp);
}