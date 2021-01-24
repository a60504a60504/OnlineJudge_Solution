#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;
ofstream Log("log.out");
typedef struct EH
{
    int E;
    int H;
}EH;
EH FindMH(int E, int N, int H, list<int>Slist, int listfront)
{
    EH REH;
    REH.E=E;
    REH.H=H;
    int rival=Slist.front();
    if (Slist.empty()&&listfront==rival) return REH;
    EH EH[4],MaxEH;
    MaxEH.E=0;
    MaxEH.H=0;
    for (int i=0;i<4;i++)
    {
        EH[i].E=0;
        EH[i].H=0;
    }
    Slist.pop_front();
    list<int>newSlist=Slist;
    if (E>rival)
    {
        EH[0]=FindMH(E-rival,N,H+1,Slist,rival);
    }
    if (!newSlist.empty())
    {
        Log << listfront<<" "<<rival<<endl;
        newSlist.push_back(rival);
        EH[1]=FindMH(E,N,H,newSlist,listfront);
    }
    if (H>0)
    {
        EH[2]=FindMH(E+rival,N,H-1,Slist,rival);
    }
    EH[3]=FindMH(E,N,H,Slist,rival);
    for (int i=0;i<4;i++)
    {
        Log << i << " "<< EH[i].E<< " "<<EH[i].H<<endl;
        if (EH[i].H>MaxEH.H) MaxEH=EH[i];
        else if (EH[i].H==MaxEH.H&&EH[i].E>MaxEH.E) MaxEH=EH[i];
    }
    return MaxEH;
}
int CntMH(int E, int N, int *S)
{
    int Honor=0;
    EH MaxEH;
    list<int>Slist(S, S+N);
    MaxEH=FindMH(E,N,Honor,Slist,Slist.front());
    Honor=MaxEH.H;
    return Honor;
}
int main()
{
    int T;
	ifstream InFile("B-large.in");
	ofstream OutFile("B-large.out");
	InFile >> T;
	for (int i=0;i<T;i++)
	{
        int E, N, S[1000000],MaxHonor;
        InFile >> E>> N;
        for (int j=0;j<N;j++) InFile >> S[j];
        MaxHonor=CntMH(E,N,S);
        OutFile << "Case #"<< i+1<< ": "<< MaxHonor<< endl;
	}
	InFile.close();
	OutFile.close();
	Log.close();
    return 0;
}
