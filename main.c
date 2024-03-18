#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float e = 2.71828182846;
    const int n=9;
    float a[n][n];
    float x[n];
    float p = 1;
    int i,j,k=0;
    for( i = 0; i<n; i++)
    {
        for( j = 0; j<n; j++)
        {
            if(i>0)
                a[i][j] = pow(e,(i-j))+ 2.27 * log(i);
            printf("%-12f",a[i][j]);
            x[j] = a[i][j];
            if(x[j]>0 && x[j]!=1)
            {
                p = p * log(fabs(x[j]));
            }
        }
        printf("\n");
    }
    for(j=0; j<n; j++)
    {
        for( i=0; i<n; i++)
        {
            x[i]=a[j][i];
        }
    }
    for(j=0; j<n; j++)
    {
        printf("|%-12f\n",x[j]);
    }
    printf(" Result = %f\n",p);
    return 0;
}

