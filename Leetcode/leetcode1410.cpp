#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    string entityParser(string text) {
        string ans=text;
        for (int i=0;i<ans.size();i++) {
            if (ans[i] != '&') continue;
            else {
                if (ans[i+1]=='q'&&ans[i+2]=='u'&&ans[i+3]=='o'&&ans[i+4]=='t'&&ans[i+5]==';') {
                    ans.replace(i,6,"\"");
                }
                else if (ans[i+1]=='a'&&ans[i+2]=='p'&&ans[i+3]=='o'&&ans[i+4]=='s'&&ans[i+5]==';'){
                    ans.replace(i,6,"\'");
                }
                else if (ans[i+1]=='a'&&ans[i+2]=='m'&&ans[i+3]=='p'&&ans[i+4]==';'){
                    ans.replace(i,5,"&");
                }
                else if (ans[i+1]=='g'&&ans[i+2]=='t'&&ans[i+3]==';'){
                    ans.replace(i,4,">");
                }
                else if (ans[i+1]=='l'&&ans[i+2]=='t'&&ans[i+3]==';'){
                    ans.replace(i,4,"<");
                }
                else if (ans[i+1]=='f'&&ans[i+2]=='r'&&ans[i+3]=='a'&&ans[i+4]=='s'&&ans[i+5]=='l'&&ans[i+6]==';'){
                    ans.replace(i,7,"/");
                }
            }
        }
        return ans;
    }
};

int main () {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	Solution s;
	string input, ans;
	
	while (getline(cin,input)) {
		cout << s.entityParser(input) << endl;
	}
	
	return 0;
}