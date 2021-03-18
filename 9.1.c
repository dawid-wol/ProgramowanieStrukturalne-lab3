#include <stdio.h>
#include <stdlib.h>

double min(double x,double y)
{
    if(x < y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int main()
{
    double z = min(62.5, 40.7);
    printf("%f", z);
    return 0;
}
