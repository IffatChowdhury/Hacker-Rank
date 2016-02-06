/*
Given an integer, N, traverse its digits (d1,d2,...,dn) and determine how many digits evenly divide N (i.e.: count the number of times N divided by each digit di has a remainder of 0). Print the number of evenly divisible digits.
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution{
	
	public:
	int findDigits(int number){
		int count = 0;
		int save = number;
		while(number != 0){
			int remain = number % 10;
			if ( (remain != 0) && (save % remain == 0) ){
				count++;
				}
			number = number / 10;		
			}
		return count;
		}
	};

int main(){
    int t, result;
    cin >> t;
    Solution ob;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        result = ob.findDigits(n);
        cout << result << endl;
    }
    return 0;
}
 
