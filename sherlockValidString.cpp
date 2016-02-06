/*Input Format

The first and only line contains S, the string Watson gives to Sherlock.

Output Format

Output YES if string S can be converted to a "valid" string by removing less than or equal to one character. 
Else, output NO.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


bool sherlockValidString(string str){
	int chardiff = 0;
	map <char, int> countList;
	for(int i = 0; i < (int) str.length(); i++){
		countList[str[i]]++;
	}
	/*for(map <char, int> :: iterator countListIterator1 = countList.begin(); countListIterator1 != countList.end(); countListIterator1++){
		cout << countListIterator1 -> first << " " << countListIterator1 -> second << endl;
		}*/
	int temp;
	if ( countList[str[0]] ==  countList[str[1]] && countList[str[1]] == countList[str[2]])
		temp = countList[str[0]];
	else if ( countList[str[0]] ==  countList[str[1]])
		temp = countList[str[0]];
	else if ( countList[str[1]] ==  countList[str[2]] )
		temp = countList[str[1]];
	else
		temp = countList[str[2]];
	
	for(map <char, int> :: iterator countListIterator = countList.begin(); countListIterator != countList.end(); countListIterator++){
		
		if (countListIterator -> second != temp){
			
			chardiff++;
			
			if (countListIterator -> second == 1)
				;
			else if ( (countListIterator -> second - 1) != temp)
				return false;
			
		}
		
		if (chardiff > 1)
			return false;
		
	}
	return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    getline (cin, s);
    bool result = sherlockValidString(s);
    if (result == true)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    return 0;
}
