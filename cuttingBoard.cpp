/*
Input Format

The first line contains a single integer, T, denoting the number of test cases. The subsequent 3T lines describe each test case in 3 lines.

For each test case, the first line has two positive space-separated integers, m and n, detailing the respective height (y) and width (x) of the board. 
The second line has m−1 space-separated integers listing the cost, cyj, of cutting a segment of the board at each respective location from y1,y2,…,ym−2,ym−1. 
The third line has n−1 space-separated integers listing the cost, cxi, of cutting a segment of the board at each respective location from x1,x2,…,xn−2,xn−1.

Output Format

For each of the T test cases, find the minimum cost (MinimumCost) of cutting the board into 1×1 squares and print the value of MinimumCost % (109+7).

Sample Input
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int t, xNo, yNo, i, j, sum, cx, cy;
    long long int item;
    cin >> t;
    while(t--){
		
    	cin >> yNo;
		cin >> xNo;
		xNo--; yNo--;
		long long int Y[yNo], X[xNo], modu = 1000000007;
		for(i = 0; i < yNo; i++){
			cin >> item;
			Y[i] = item;		
			}
		for(i = 0; i < xNo; i++){
			cin >> item;
			X[i] = item;		
			}
		sort(X, X + xNo);
		sort(Y, Y + yNo);
		i = yNo - 1; sum = 0; j = xNo -1; cx = 1; cy = 1;
		while( i >= 0 && j >= 0){

			if(Y[i] > X[j]){
				sum += ( Y[i] * cy) % modu;
				cx++;
				i--;
				}
			else{
				sum += ( X[j] * cx) % modu;
				cy++;
				j--;
				}
			}
		while( i >= 0){
			sum += (Y[i] * cy) % modu;
			i--;
			}
		while( j >= 0){
			sum += (X[j] * cx) % modu;
			j--;
			}
		cout << sum % modu << endl;	
		} 
    return 0;
}




 
