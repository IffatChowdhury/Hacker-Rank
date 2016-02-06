
/*
Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly, because it is a pangram. (Pangrams are sentences constructed by using every letter of the alphabet at least once.)

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.

Given a sentence s, tell Roy if it is a pangram or not.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

bool pangramDetect(string input){
	//cout << "inside function: " << input << endl;
 	int count = 0;
	map<char, int> charList;
	for(int i = 0; i < (int)input.size(); i++){
		char c = input[i];
		if (input[i] != ' '){
			if ( isupper(input[i])) 
				c = tolower (input[i]);
					
			map<char, int>::iterator mi = charList.find(c);  
			if(mi != charList.end()) {  
				//found  
				//do something to mi.  
				charList[c]++;
				} 
			else {  
				// not found
				//cout << c << endl;
				count++;
				charList[c]++;  
				}	 	 
			}
		}
	//cout << "count " << count << endl;
	if(count < 26)
		return false;
	else
		return true;
	}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string input;
    getline (cin, input);
 
    //cout << "inside main: " << input << endl;
    bool result = pangramDetect(input);
   
    if (result == true)
		cout << "pangram" << endl;
	else
		cout << "not pangram" << endl; 
    return 0;
}
 
