/*
Input Format

There will be exactly 6 lines of input, each containing 6 integers separated by spaces. Each integer will be between -9 and 9, inclusively.

Output Format

Print the answer to this problem on a single line.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[6][6];
    int item, i, j;
    int sum = -10000000;
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			cin >> item;
			a[i][j] = item;
			}
		}
	for(j = 0; j < 4; j++){
		for(i = 0; i < 4; i++){
			int tempSum = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
			if (tempSum > sum)
				sum = tempSum;
			}
		}
	cout << sum << endl;
    return 0;
}
 
