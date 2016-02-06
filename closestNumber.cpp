/*
Input Format 
The first line of input contains a single integer, N, representing the length of array A. 
In the second line, there are N space-separated integers, a1,a2,…,aN, representing the elements of array A.

Output Format 
Output the pairs of elements with the smallest difference. If there are multiple pairs, output all of them in ascending order, all on the same line (consecutively) with just a single space between each pair of numbers. If there's a number which lies in two pair, print it two times (see the sample case #3 for explanation).
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution{
	
	public:
	void findClosest(vector<int>& numbers){
		long long int diff = 10000000000;
		sort (numbers.begin(), numbers.end());
		vector<int> results;
		for(int i = 1; i < (int) numbers.size(); i++){
			if (numbers[i] - numbers[i-1] < diff)
				diff = numbers[i] - numbers[i-1];
			} 
		for(int i = 1; i < (int) numbers.size(); i++){
			if (numbers[i] - numbers[i-1] == diff)
				cout << numbers[i-1] << " " << numbers[i] << " ";
			} 
		return;
		}
	};

int main() 
{
    int n; 
    Solution ob;
    cin >> n ;
    vector<int> numbers;
    for(int i = 0; i < n; i++)
    {
		int p;
		cin >> p;
        numbers.push_back(p);
    }
    
    ob.findClosest(numbers);
    return 0;
}
 
