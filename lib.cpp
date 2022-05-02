#include "lib.h"
double maggiore(double x[], int d)
{
    double m=x[0];
    for(int i=1;i<d;i++)
    {
        if(x[i]>m)
        {
            m=x[i];
        }
    }
    return m;
}




