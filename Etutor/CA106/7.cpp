#include <iostream>
using namespace std;
int factorial(int n)
{
    int i,sum=1;
    for (i=1;i<=n;i++) sum*=i;
    return sum;
}

int main ()
{
    int n;
    while (cin >> n)
    {
        int i, j;
        string s[n];
        int str_num[n], max=0;
        int letters_num[26], cnt;
        for (i=0;i<n;i++) cin >> s[i];
        for (i=0;i<n;i++)
        {
            cnt = 0;
            for (j=0;j<26;j++) letters_num[j]=0;
            for (j=0;s[i][j]!='\0';j++)
            {
                letters_num[int(s[i][j])-97]++;
                cnt++;
            }
            str_num[i]=factorial(cnt);
            for (j=0;j<26;j++)
            {
                str_num[i]/=factorial(letters_num[j]);
            }
            if (str_num[i]>max) max=str_num[i];
        }
        for (i=0;i<n;i++)
        {
            if (max == str_num[i]) cout << s[i] << endl;
        }
    }
    return 0;
}
