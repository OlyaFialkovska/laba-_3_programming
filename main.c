#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float mxAvc ()
{
    const int n = 9;
    const float e = 2.71828182846;
    float a[n][n], x[n];
    float u = 1;
    printf("MATRIX a:\n");
    for(int i=1; i<113; i++)
        printf("-");
    printf("\n");
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if( i > 0 )
                a[i][j] = pow(e,(i-j))+ 2.27 * log(i);
            printf("%-13.5f",a[i][j]);
        }
        printf("\n");
    }
    for(int i=1; i<113; i++)
        printf("-");
    printf("\n");
    for(int j = 0; j<n; j++)
    {
        for(int i = 0; i<n; i++)
        {
            x[i] = a[j][i];
        }
    }
    printf("VECTOR x:\n");
    for(int i=1; i<105; i++)
        printf("-");
    printf("\n");
    for(int i = 0; i<=n-1; i++)
    {
        printf("%-12.5f",x[i]);
        if(x[i]>0 && x[i]!=1)
        {
            u = u * log(fabs(x[i]));
        }
    }
    printf("\n");
    for(int i=1; i<105; i++)
        printf("-");
    printf("\n");
    printf("FUNCTION U:");
    printf("\n");
    for(int i=1; i<15; i++)
        printf("-");
    printf("\n");
    return u;
}
int main()
{
    printf("%f\n", mxAvc ());
    for(int i=1; i<15; i++)
        printf("-");
    return 0;
}

