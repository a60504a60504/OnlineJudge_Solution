#include <iostream>
using namespace std;
void PrintWord (int LN[52], string stk)
{
    int i, empty=1;
    for (i=0;i<26;i++)
    {
        if (LN[i]!=0)
        {
            empty =0;
            stk += char(65+i);
            LN[i]--;
            PrintWord(LN,stk);
            stk = stk.assign(stk,0,stk.length()-1);
            LN[i]++;
        }
    }
    for (i=26;i<52;i++)
    {
        if (LN[i]!=0)
        {
            empty =0;
            stk += char(97+i-26);
            LN[i]--;
            PrintWord(LN,stk);
            stk = stk.assign(stk,0,stk.length()-1);
            LN[i]++;
        }
    }
    if (empty == 1) cout << stk << endl;
}

int main ()
{
    int n;
    while (cin >> n)
    {
        string input[n];
        string s;
        int i, j;
        int letters_num[52];
        for (i=0;i<n;i++) cin >> input[i];
        for (i=0;i<n;i++)
        {
            for (j=0;j<52;j++) letters_num[j]=0;
            for (j=0;input[i][j]!='\0';j++)
            {
                if (input[i][j]>='a'&&input[i][j]<='z')
                    letters_num[int(input[i][j])-97+26]++;
                else if (input[i][j]>='A'&&input[i][j]<='Z')
                    letters_num[int(input[i][j])-65]++;
            }
            PrintWord(letters_num,s);
        }
    }
    return 0;
}
