#include <iostream>
using namespace std;
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
int main ()
{
    int n;
    while (cin >> n)
    {
        int feed[n][2], max=0;
        int i, j, sum;
        for (i=0;i<n;i++) cin >> feed[i][0]>> feed[i][1];
        for (i=powN(2,n)-1;i>=0;i--)
        {
            sum = 0;
            for (j=0;j<n;j++)
            {
                sum+=((i>>j)&1)*feed[j][0];
            }
            if (sum>100) continue;
            sum = 0;
            for (j=0;j<n;j++)
            {
                sum+=((i>>j)&1)*feed[j][1];
            }
            if (max < sum) max = sum;
        }
        cout << max<< endl;
    }
    return 0;
}
