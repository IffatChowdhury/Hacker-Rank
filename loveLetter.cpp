/*James found a love letter his friend Harry has written for his girlfriend. James is a prankster, so he decides to meddle with the letter. 
 * He changes all the words in the letter into palindromes.

To do this, he follows two rules:

He can reduce the value of a letter, e.g. he can change d to c, but he cannot change c to d.
In order to form a palindrome, if he has to repeatedly reduce the value of a letter, he can do it until the letter becomes a. 
* Once a letter has been changed to a, it can no longer be changed.
Each reduction in the value of any letter is counted as a single operation. Find the minimum number of operations required 
* to convert a given string into a palindrome.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int makePalindrome(string s){
	int count = 0, diff, i, j;
	int size = s.size();
	
	for(i = 0, j = size - 1; ; i++, j--){
		//cout << "s[i]" << s[i] << " " << i <<  " s[j]" << s[j] << " " << j << endl;
		if ( (i == j) || (i > j) )
			break;
		if (s[i] != s[j]){
			if (s[i] > s[j]){
				diff = s[i] - s[j];
				s[i] = s[i] - diff;
				count += diff;
				}
			else{
				diff = s[j] - s[i];
				s[j] = s[j] - diff;
				count += diff;
				}
			}
		}
	return count;
	}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        cout << makePalindrome(str) << endl;
    }
    return 0;
}
