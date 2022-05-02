#include "lib.h"
float maggiore(float x[], int d)
{
    float m=x[0];
    for(int i=1;i<d;i++)
    {
        if(x[i]>m)
        {
            m=x[i];
        }
    }
    return m;
}




