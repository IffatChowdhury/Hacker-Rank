/*
Input Format 
The first line contains two integers, N and K, followed by a line containing N space separated integers indicating the products' prices.

Output Format 
An integer that denotes maximum number of toys Mark can buy for his son.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int calculateToys(int n, int k, vector<int>& price){
	int count = 0;
	sort (price.begin(), price.end());
	
	for(int i = 0; i < n; i++){
		//cout << price[i] << endl;
		if (k >= price[i]){
			count++;
			k = k - price[i];
			}
		else
			break;
		}  
	return count;
	}

int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    
    int answer = 0;
    
    // Write the code for computing the final answer using n,k,prices
    answer = calculateToys(n, k, prices);
    cout << answer << endl;
    
    return 0;
}
 
