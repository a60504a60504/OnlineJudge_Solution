#include <stdio.h>
int main ()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        int i,j,k;
        int cash[1000],total;
        for (i=0;i<n;i++)
        {
            k=0;
            while (scanf("%d",&j)&&j!=1) cash[k++]=j;
            cash[k++]=1;
            scanf("%d",&total);
            int change[k][2],sum=0;
            for (j=0;j<k;j++)
            {
                change[j][1] = cash[j];
                change[j][0] = total/cash[j];
                sum += change[j][0];
                total %= cash[j];
            }
            printf("%d\n",sum);
            for (j=0;j<k;j++) printf("%d %d\n",change[j][1],change[j][0]);
        }
    }
    return 0;
}
