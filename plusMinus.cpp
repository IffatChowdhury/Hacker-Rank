/*
Input Format

The first line, N, is the size of the array. 
The second line contains N space-separated integers describing the array of numbers (A1,A2,A3,⋯,AN).

Output Format

Print each value on its own line with the fraction of positive numbers first, negative numbers second, and zeroes third.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;


	int main() 
	{
		int sizeofarray;
		cin >> sizeofarray;
		int elem;
		int numOfPos = 0, numOfNeg = 0, numOfZero = 0;
		for (int i = 0; i < sizeofarray; ++i)
		{
			cin >> elem;
			if (elem == 0)
				numOfZero++;
			else if (elem > 0)
				numOfPos++;
			else numOfNeg++;
		} 
		std::cout << std::fixed << std::setprecision(3) << (float) numOfPos/ (float) sizeofarray << endl;
		std::cout << std::fixed << std::setprecision(3) << (float) numOfNeg/ (float) sizeofarray << endl;
		std::cout << std::fixed << std::setprecision(3) << (float) numOfZero/ (float) sizeofarray << endl;
		return 0; 
	}
