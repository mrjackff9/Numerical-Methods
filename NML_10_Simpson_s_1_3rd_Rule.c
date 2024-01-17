//Simpson's 1/3 rule
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
    float a, b, h, simp;
    int n, k;
    printf("Value of a, b, n: ");
    scanf("%f%f%d", &a, &b, &n);
    h = (b-a)/n;
    simp = f(a) + f(b);
    for(k=1; k<n; k=k+2)
    {
        simp = simp + 4 * f(a+h*k);
    }
    for(k=2; k<n; k=k+2)
    {
        simp = simp + 2 * f(a+h*k);
    }
    simp = simp * h / 3;
    printf("\nResult = %f", simp);
}