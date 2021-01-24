#include <stdio.h>
int powN(int base,int exp)
{
    int i;
    long long int sum=1;
    for (i=1; i<=exp; i++)
    {
        sum *= base;
    }
    return sum;
}
void printBinary(int dec,int max)
{
    int i;
    for (i=max-1;i>=0;i--)
    {
        printf("%d",(dec>>i)&1);
    }
    printf("\n");
}
int main ()
{
    int n,i;
    while (scanf("%d",&n)!=EOF)
    {
        for (i=0; i<powN(2,n); i++)
        {
            printBinary(i,n);
        }
    }
    return 0;
}
