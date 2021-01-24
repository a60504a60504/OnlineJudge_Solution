#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{   
	fstream fs_in, fs_out;
	fs_in.open ("A-large.in", fstream::in | fstream::out | fstream::app);
	fs_out.open ("A-large.out", fstream::in | fstream::out | fstream::app);
    int T,N,K;
    fs_in >> T;
    for (int x=0;x<T;x++)
    {
        int y=0;
        fs_in >> N>> K;
        int A[N];
        for (int i=0;i<N;i++) fs_in >> A[i];
		sort(A,A+N);
        for (int i=0,today=0,tmpK=K;i<N;i++) 
		{
			if (A[i] > today) 
			{
				y++;
				tmpK--;
				if (tmpK==0)
				{
					today++;
					tmpK=K;
				}
			}
		}
        
        fs_out << "Case #"<< x+1<<": "<< y<< endl;
    }
    return 0;
}