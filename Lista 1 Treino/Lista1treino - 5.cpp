#include <stdio.h>
#include <math.h>

int main ()
{
    int a,b,c,d,res;
    scanf ("%d %d %d",&a,&b,&c);
    d = (a+b+abs(a-b))/2;
    res = (d+c+abs(d-c))/2;
    printf ("%d eh o maior\n",res);
    return 0;
}