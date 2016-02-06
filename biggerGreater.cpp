/*
Given a word w, rearrange the letters of w to construct another word s in such a way that s is lexicographically greater than w. In case of multiple possible answers, find the lexicographically smallest one among them.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


string biggerIsGreater(string str, int len){
	int i = len - 1;
    while (i > 0 && str[i - 1] >= str[i])
        i--;
	if (i <= 0)
		return "no answer";
	int j = len - 1;
    while (str[j] <= str[i - 1])
        j--;
	char temp = str[i - 1];
    str[i - 1] = str[j];
    str[j] = temp;
    j = len - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    string str, result;
    cin >> t;
    while(t--){
		cin >> str;
		int len = str.length();
		result = biggerIsGreater(str, len);
		cout << result << endl;		
		}  
    return 0;
} 
