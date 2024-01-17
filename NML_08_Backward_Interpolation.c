//Newton's backward interpolation
#include <stdio.h>
#include <math.h>
int main()
{
    float x[15], y[15], X, p = 1, u, h, d;
    int i, j, n;
    printf("Enter the number of points: ");
    scanf("%d", &n);
    printf("Enter the value of X for which y is required: ");
    scanf("%f", &X);
    printf("Enter the values of x and y\n");
    printf("x\t\ty=f(x)\n");
    for (i=1; i<=n; i++)
        scanf("%f\t\t%f", &x[i], &y[i]);
    h = x[2]-x[1];
    //printf("\nh=%f\n", h);
    u = (X-x[n])/h;
    d = y[n];
    //printf("u=%f\td=%f\n", u, d);
    for (i=1; i<n; i++)
    {
        for (j=n; j>=i+1; j--)
        {
            y[j] = y[j] - y[j-1];
            //printf("\ny=%f\n", y[j]);
        }
        p = p*(u+i-1)/i;
        d = d+p*y[n];
        //printf("\nd=%f\n", d);
    }
    printf("\nThe result of Newton's backward interpolation\n");
    printf("y(%.2f) = %.5f", X, d);
}