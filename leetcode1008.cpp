#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
		string newAddress;
        for (std::string::iterator it=address.begin(); it!=address.end(); ++it) {
            if (*it=='.') newAddress+= "[.]";
			else newAddress += *it;
        }
        return newAddress;
    }
};


int main () {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	Solution s;
	string addr;
	
	while (cin >> addr){
		cout << s.defangIPaddr(addr) << endl;
	}
	
	return 0;
}