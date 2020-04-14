#include <bits/stdc++.h>

#define endl '\n'

using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (vector<vector<char>>::iterator col=board.begin();col!=board.end();++col) {
            for (vector<char>::iterator row=col->begin();row!=col->end();++row){
                cout << *row<< endl;
            }
        }
        return true;
    }
};

int main () {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	Solution s;
	string input_list;
	vector<vector<char>> board;
	vector<char> newCol;
	char item;
	
	while (1) {
		while (board.size() < 81){
			getline(cin,input_list);
			istringstream T(input_list);
			while (T >> item) {
				if ((item >= '1' && item <='9')||item == '.') {
					board.push_back(newCol);
					board.at(int(board.size()/9)).push_back(item);
				}
			}
		}
		cout << s.isValidSudoku(board) << endl;
		system("pause");
	}
	
	return 0;
}