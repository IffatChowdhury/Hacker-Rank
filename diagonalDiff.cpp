/*
Given a square matrix of size N×N, calculate the absolute difference between the sums of its diagonals.

Input Format

The first line contains a single integer, N. The next N lines denote the matrix's rows, with each line containing N space-separated integers describing the columns.

Output Format

Print the absolute difference between the two sums of the matrix's diagonals as a single integer.
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
		int sum1 = 0, sum2 = 0;
		int index1 = -1, index2 = sizeofarray;
		int elem;
		for (int i = 0; i < sizeofarray; ++i)
		{
			index1++; index2--;
			for (int j = 0; j < sizeofarray; j++)
			{
				cin >> elem;
				if (j == index1)
					sum1 += elem;
				if (j == index2)
					sum2 += elem;
			}
		} 
		
		cout << abs(sum1 - sum2) << endl;
		return 0; 
	}

