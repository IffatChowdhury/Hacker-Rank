/*
Input 
The first line of input consists of an integer N. The next line contains N space-separated integers representing the array elements. 
Sample:

6
1 2 3 4 10 11
Output 
Output a single value equal to the sum of the elements in the array. 
For the sample above you would just print 31 since 1+2+3+4+10+11=31.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
	{
		int sizeofarray;
		cin >> sizeofarray;
		int a[sizeofarray];
		int sum = 0;
		for (int i = 0; i < sizeofarray; ++i)
		{
			cin >> a[i];
			sum += a[i];
		} 
		
		cout << sum << endl;
		return 0; 
	}

