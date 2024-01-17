//Newton's forward interpolation program
#include <math.h>
#include <stdio.h>
int main()
{
    float x[15], y[15], X, p=1, u, h, d;
    int i, j, n;
    printf("Enter the number of points: ");
    scanf("%d", &n);
    printf("Enter the value of x at which y is required: ");
    scanf("%f", &X);
    printf("Enter the values of x and y\n");
    printf("x\ty=f(x)\n");
    for (i=1; i<=n; i++)
    {
        scanf("%f\t%f", &x[i], &y[i]);
    }
    h = x[2] - x[1];
    //printf("h=%f", h);
    u = (X - x[1])/h;
    d = y[1];
    //printf("\n%f %f", u, d);
    for (i=1; i<=n-1; i++)
    {
        for (j=1; j<=n-1; j++)
        {
            y[j] = y[j+1] - y[j];
            //printf("\n%f", y[j]);
        }
        p = p*(u-i+1)/i;
        d = d+p*y[1];
        //printf("\n%f", d);
    }
    printf("\nThe result of Newton's forward interpolation\n");
    printf("y(%.2f) = %.5f", X, d);
}