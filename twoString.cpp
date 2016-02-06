
/*
Input Format

Several test cases will be given to you in a single file. The first line of the input will contain a single integer T, the number of test cases.

Then there will be T descriptions of the test cases. Each description contains two lines. The first line contains the string A and the second line contains the string B.

Output Format

For each test case, display YES (in a newline), if there is a common substring. Otherwise, display NO.
*/
#include <iostream>
#include <string>
#include <cmath>
#include <map>
using namespace std;

class Solution{
	
	public:
	bool twoString(string a, string b){
		map<char, int> listOfChar;
		for(int i = 0; i < a.size(); i++){
			listOfChar[a[i]]++;
			}
		for(int j = 0; j < b.size(); j++){
			if (listOfChar.count(b[j]))
				return true;
			}
		return false;
		}
	
	};

int main(){
	int T;
	string a,b;
	cin >> T;
	Solution ob;
	while(T != 0){
		T--;
		cin >> a;
		cin >> b;
		bool result = ob.twoString(a,b);
		if (result == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		}
	return 0;
	}

