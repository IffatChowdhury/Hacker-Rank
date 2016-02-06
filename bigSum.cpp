/*
You are given an array of integers of size N. You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.
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
		long long int a[sizeofarray];
		long long int sum = 0;
		for (int i = 0; i < sizeofarray; ++i)
		{
			cin >> a[i];
			sum += a[i];
		} 
		
		cout << sum << endl;
		return 0; 
	}
