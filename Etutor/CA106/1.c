/*
    x+2y+3z=n
*/
#include <stdio.h>
// n! = 1*2*3*...*n
long long int factorial(int n)
{
    int i;
    long long int sum=1;
    for (i=1;i<=n;i++) sum*=i;
    return sum;
}
// n!/m! = n*(n-1)*(n-2)*...*(m+1)
long long int factorial2(int n, int m)
{
    int i;
    long long int sum=1;
    for (i=n;i>m;i--) sum*=i;
    return sum;
}
int main ()
{
    int n,z,y,x;
    long long int total;
    while (scanf("%d",&n)!=EOF && n!=-1)
    {
        total=0;
        for (z=0;3*z<=n;z++)
        {
            for (y=0;3*z+2*y<=n;y++)
            {
                x = n-3*z-2*y;
                if (x>=y && x>=z)
                    total += factorial2(x+y+z,x)/factorial(y)/factorial(z);
                else if (y>=x && y>=z)
                    total += factorial2(x+y+z,y)/factorial(x)/factorial(z);
                else if (z>=x && z>=y)
                    total += factorial2(x+y+z,z)/factorial(x)/factorial(y);
            }
        }
        printf("%d\n",total);
    }
    return 0;
}
