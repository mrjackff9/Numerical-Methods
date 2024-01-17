//Gauss elimination method
#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k, l, m, n;
    float a[20][20], x[20], b[20][20], d;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter augmented matrix\n");
    d = 1.0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1; j++)
        {
            b[i][j] = a[i][j] / a[i][i];
        }
        d = d * a[i][i];
        for (k=i+1; k<=n; k++)
        {
            for (j=i; j<=n+1; j++)
            {
                b[k][j] = a[k][j] - a[k][i] * b[i][j];
            }
        }
        printf("\nThe new matrix is\n");
        for (l=1; l<=n; l++)
        {
            for (m=1; m<=n+1; m++)
            {
                a[l][m] = b[l][m];
                printf("%3.3f ", b[i][m]);
            }
        printf("\n");
        }
    }
    x[n] = a[n][n+1];
    for (i=n-1; i>=1; i--)
    {
        x[i] = a[i][n+1];
        for(k=i+1; k<=n; k++)
        {
            x[i] = x[i] - a[i][k] * x[k];
        }
    }
    printf("\nThe required result\n");
    for(i=1; i<=n; i++)
    {
        printf("x[%d] = %3.3f\n", i, x[i]);
    }
}