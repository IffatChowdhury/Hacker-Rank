/*Shashank likes strings in which consecutive characters are different. 
 * For example, he likes ABABA, while he doesn't like ABAA. Given a string containing 
 * characters A and B only, he wants to change it into a string he likes. To do this, 
 * he is allowed to delete the characters in the string.
Your task is to find the minimum number of required deletions.
 * */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int t;
    cin >> t;
    string input;
   long int noOfDel;
    while(t--){
		cin >> input;
		noOfDel = 0;
		for(long int i = 1; i < (int)input.size(); i++){
			if (input[i - 1] == input[i]){
				noOfDel++;
			}
		}
		cout << noOfDel << endl;
	} 
    return 0;
}
