#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int LCM(int a, int b) {
	int min, max;
	int r;
	max=a>b?a:b;
	min=a<b?a:b;
	while(max%min!=0)
	{
		r=max%min;
		max=min;
		min=r;
	}
	return (a*b/min);
}

string func(string s, string t) {
	string s_str="", t_str="";
	int lcm = LCM(s.size(),t.size());
	for (int i=0;i<lcm/s.size();i++) s_str += s;
	for (int i=0;i<lcm/t.size();i++) t_str += t;
	if (s_str==t_str) return s_str;
	else return "-1";
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
		string s,t;
		string ans;
		cin >> s>> t;
		ans = func(s,t);
		cout << ans << endl;
    }
    
    return 0;
}