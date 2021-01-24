#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
//ofstream Log("log.out");
#define MAX_TABLE 10001
int Table[MAX_TABLE];
void initTable()
{
    for (int i=0;i<MAX_TABLE;i++) Table[i]=0;
}
int MinCnt (int N, int cnt)
{
    int MaxSqrt,tcnt=MAX_TABLE, tempN;
    if (Table[N]!=0) return Table[N];
    else if (N==0) return cnt;
    MaxSqrt=floor(sqrt(N));
    for (int i=1;i<=MaxSqrt;i++)
    {
        tempN=N;
        tempN=tempN-i*i;
        tcnt=min(MinCnt(tempN,cnt)+1,tcnt);
    }
    Table[N]=tcnt;
    return tcnt;
}
int main()
{
    int T;
	ifstream InFile("D-large.in");
	ofstream OutFile("D-large.out");
    initTable();
	InFile >> T;
	for (int i=0;i<T;i++)
	{
        int N,flag;
        InFile >> N;
        OutFile << "Case #"<< i+1<< ": "<< MinCnt(N,0)<< endl;
        //for (int j=0;j<MAX_TABLE;j++) Log << Table[j]<< " ";
        //Log <<endl;
	}
	InFile.close();
	OutFile.close();
	//Log.close();
    return 0;
}
