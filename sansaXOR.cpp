/*
Input Format 
First line contains an integer T, number of the test cases. 
The first line of each test case contains an integer N, number of elements in the array. 
The second line of each test case contains N integers that are elements of the array.

Output Format 
Print the answer corresponding to each test case in a separate line.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


class Solution{
	public:
	int sansaXOR(int a[], int size){
			
		/*int sum = 0;
		int half = 0;
		int index = 0;
		if (size % 2 == 0)
			return 0;
		else
			half = size/2 + 1;
		int loopCount = size;
		int increase = size - 2;
		int j = 0, k = 0;
		for (j = 0; j < half; j++){
			k = 0;
			while (k != loopCount){
				k++;
				sum ^= a[index];
				}
			index++;
			loopCount = loopCount + increase;
			increase = increase - 2;
			}
		loopCount = size;
		increase = size - 2;
		index = size - 1;
		half = half - 1;
		for(j = size - 1; j > half; j--){
			k = 0;
			while (k != loopCount){
				k++;
				sum ^= a[index];
				}
			index--;
			loopCount = loopCount + increase;
			increase = increase - 2;
			}*/
		int sum = 0;
		if (size %2 == 0)
			return 0;
		else{
			for (int i = 0; i < size; i = i + 2){
				//cout << "index" << i << endl;
				sum = sum ^ a[i];
				}
			}
		return sum;
		}
	};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    Solution ob;
    int t;
    cin >> t;
    
    while(t != 0){
		t--;
		int noElem, elem;
		cin >> noElem;
		int a[noElem];
		for(int i = 0; i < noElem; i++){
			cin >> elem;
			a[i] = elem;
			}
		int size = (sizeof(a)/sizeof(a[0]));
		/*cout << sizeof(a) << endl;
		cout << sizeof(a[0]) << endl;
		cout << size << endl;
		cout << "Elements " << endl;
		for (int l = 0; l < size; l++)
			cout << a[l] << " " ;
		cout << endl;*/
		int result = ob.sansaXOR(a, size); 
		cout << result << endl;
		}
    
    return 0;
}
