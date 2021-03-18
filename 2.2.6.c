#include <stdio.h>
#include <stdlib.h>

int potega(int n, int m)
{
int i;
int z = 1;
for(i = 1; i <= m; i++)
{
    z *= n;
}
return z;
}
int main()
{
    int y = potega(2,4);
    printf("%u", y);
    return 0;
}
