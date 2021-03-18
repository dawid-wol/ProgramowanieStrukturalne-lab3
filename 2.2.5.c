#include <stdio.h>
#include <stdlib.h>

int potega(int n)
{
int i;
int x = 2;
for(i = 1; i < n; i++)
{
    x *= 2;
}
return x;
}
int main()
{
    int y = potega(4);
    printf("%u", y);
    return 0;
}
