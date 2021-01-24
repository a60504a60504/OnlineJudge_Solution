#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
//ofstream Log("log.out");
int CheckWorse (int *A, int N)
{
    int MaxCase,MinCase,A_after[10000],pivot;
    if (N<=1) return 0;
    MaxCase=*max_element(A,A+N);
    MinCase=*min_element(A,A+N);
    pivot=floor((N-1)/2);
    //Log << pivot<< " "<<MaxCase<<" "<<MinCase<< endl;
    if (A[pivot]!=MaxCase&&A[pivot]!=MinCase) return 1;
    else
    {
        for (int i=0;i<pivot;i++) A_after[i]=A[i];
        for (int i=pivot+1;i<N;i++) A_after[i-1]=A[i];
        if (CheckWorse(A_after,N-1)==1) return 1;
        else return 0;
    }
}
int main()
{
    int T;
	ifstream InFile("A-large-practice.in");
	ofstream OutFile("A-large-practice.out");
	InFile >> T;
	for (int i=0;i<T;i++)
	{
        int N,flag,A[10000];
        InFile >> N;
        for (int j=0;j<N;j++) InFile >> A[j];
        flag=CheckWorse(A,N);
        if (flag==0) OutFile << "Case #"<< i+1<< ": YES"<< endl;
        else OutFile << "Case #"<< i+1<< ": NO"<< endl;
	}
	InFile.close();
	OutFile.close();
	//Log.close();
    return 0;
}
