#include <stdio.h>
int main ()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        int d[n][2], Output_flag[n];
        int i,j;
        for (i=0;i<n;i++) scanf("%d%d",&d[i][0],&d[i][1]);
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                if (i==j) continue;
                else if (d[i][0]<d[j][0]&&d[i][1]<d[j][1])
                {
                    Output_flag[i] = 1;
                    break;
                }
                else if (d[i][0]==d[j][0]&&d[i][1]<d[j][1])
                {
                    Output_flag[i] = 1;
                    break;
                }
                else if (d[i][0]<d[j][0]&&d[i][1]==d[j][1])
                {
                    Output_flag[i] = 1;
                    break;
                }
                else Output_flag[i] = 0;
            }
        }
        for (i=0;i<n-1;i++)
        {
            if (Output_flag[i]==1) printf("N ");
            else printf("Y ");
        }
        if (Output_flag[i]==1) printf("N\n");
        else printf("Y\n");
    }
    return 0;
}
