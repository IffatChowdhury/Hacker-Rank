/*
Input Format
The first line contains an integer, T, the number of test-cases. T test cases follow. Each test case has the following format:

The first line contains two integers, N and K. The second line contains N space separated integers, denoting array A. The third line describes array B in a same format.

Output Format
For each test case, if such an arrangement exists, output "YES", otherwise "NO" (without quotes).
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool twoArray(int N, int A[], int B[], int K){
	int i = 0, j = N - 1;
	sort(A, A + N);
	sort(B, B + N);
	for(i = 0; i < N; i++){
		if (A[i] + B[j] < K)
			return false;
		j--;
		}
	return true;	
	}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t, N, K, i;
    int item;
    cin >> t;
    while(t--){
		cin >> N;
		cin >> K;
		int A[N], B[N];
		for(i = 0; i < N; i++){
			cin >> item;
			A[i] = item;		
			}
		for(i = 0; i < N; i++){
			cin >> item;
			B[i] = item;		
			}
		bool result = twoArray(N, A, B, K);
		if (result == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;		
		} 
    return 0;
}
 
