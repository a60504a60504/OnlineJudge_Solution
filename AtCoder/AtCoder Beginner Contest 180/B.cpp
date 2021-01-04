#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
  int N;
  cin >> N;
  long long x[N],Total;
  long double Ans;
  for (int i=0;i<N;i++) cin >>x[i];
  for (int i=0;i<N;i++) x[i]=abs(x[i]);

  Total=0;
  for (int i=0;i<N;i++) Total+=x[i];
  cout << Total << endl;
  
  Ans=0;
  Total=0;
  for (int i=0;i<N;i++) Total+=x[i]*x[i];
  Ans = sqrt(Total);
  cout <<fixed << setprecision(15)<< Ans << endl;
  
  Total=0;
  for (int i=0;i<N;i++) Total=max(Total,x[i]);
  cout <<fixed << setprecision(0)<< Total << endl;
  
  return 0;
}