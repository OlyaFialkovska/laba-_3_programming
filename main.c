#include <stdio.h>
#include <stdlib.h>
#define n 10

int main()
{
    char a[n] = {'a','b','k','f','h','i','e','y','p','v'}, b[4];
    int f0=0,f=0,f1=0,f2=0;

    for(int i =0; i<n; i++)
    {
        if(a[i]=='k')
            f0=i;
        if(a[i]=='y')
            f=i;
        if(a[i]=='i')
            f1=i;
        if(a[i]=='v')
            f2=i;
    }

    if(f0!=0 && f!=0 && f1!=0 && f2!=0)
    {
        /* b[0]=a[f0];
         b[1]=a[f];
         b[2]=a[f1];
         b[3]=a[f2];
         printf("%c",b);*/
        printf("yes");
    }
    else
    {
        printf("no);}
               return 0;
    }
