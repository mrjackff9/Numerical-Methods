//Lagrange Interpolation
#include <math.h>
#include <stdio.h>
int main()
{
    float x[15], y[15], sum = 0.0, X, prod;
    int i, j, n;
    printf("Enter the number of points: ");
    scanf("%d", &n);
    printf("Enter the value of X at which y is required: ");
    scanf("%f", &X);
    printf("Enter the values of x and y\n");
    printf("x\ty=f(x)\n");
    for (i=1; i<=n; i++)
        {
            scanf("%f\t%f", &x[i], &y[i]);
        }
    for (i=1; i<=n; i++)
    {
        prod = y[i];
        for (j=1; j<=n; j++)
        {
            if (j!=i)
            {
                prod = prod*(X-x[j])/(x[i]-x[j]);
            }
        }
        sum = sum + prod;
    }
    printf("\nAt x=%f y=%f", X, sum);
}