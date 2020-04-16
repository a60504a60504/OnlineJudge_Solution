#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        for ( string::reverse_iterator rit=s.rbegin(); rit!=s.rend(); ++rit) {
            if (*rit=='I') {
                if (rit!=s.rbegin()&&(*(rit-1)=='V'||*(rit-1)=='X')) num -= 1;
                else num += 1;
            }
            else if (*rit=='V') num += 5;
            else if (*rit=='X') {
                if (rit!=s.rbegin()&&(*(rit-1)=='L'||*(rit-1)=='C')) num -= 10;
                else num += 10;
            }
            else if (*rit=='L') num += 50;
            else if (*rit=='C') {
                if (rit!=s.rbegin()&&(*(rit-1)=='D'||*(rit-1)=='M')) num -= 100;
                else num += 100;
            }
            else if (*rit=='D') num += 500;
            else if (*rit=='M') num += 1000;
        }
        return num;
    }
};

int main () {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	Solution s;
	string input;
	while (cin >> input)
		cout << s.romanToInt(input)<<endl;
	
	return 0;
}