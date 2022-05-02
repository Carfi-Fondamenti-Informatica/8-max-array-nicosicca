double maggiore(double x[], int d)
{
    double m=x[1];
    for(int i=0;i<d;i++)
    {
        if(x[i]>m)
        {
            m=x[i];
        }
    }
    return m;
}




