/*Dothraki are planning an attack to usurp King Robert's throne. 
 * King Robert learns of this conspiracy from Raven and plans to lock the single door 
 * through which the enemy can enter his kingdom.But, to lock the door he needs a key that 
 * is an anagram of a certain palindrome string.
The king has a string composed of lowercase English letters. Help him figure out whether any 
* anagram of the string can be a palindrome or not.
 * */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
   
    string s;
    cin >> s;
     
    int flag = 1;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    map<char, long int> countList;
    for(long int i = 0; i < (int) s.size(); i++){
		countList[s[i]]++;
	}
	int flagOne = 0;
    for(map<char, long int >::const_iterator it = countList.begin(); it != countList.end(); ++it){
		if ( (it -> second == 1) || (it -> second % 2 != 0) ){
			if (flagOne == 0)
				flagOne = 1;
			else{
				flag = 0;
				break;
			}
		}
	}
    if(flag == 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
