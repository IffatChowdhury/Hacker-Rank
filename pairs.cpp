/*
Given N integers, count the number of pairs of integers whose difference is K.

Input Format

The first line contains N and K. 
The second line contains N numbers of the set. All the N numbers are unique.

Output Format

An integer that tells the number of pairs of integers whose difference is K.
*/

#include <map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, item, result = 0;
    cin >> n;
    int k;
    cin >> k;
    int i;
    map <int, int> keepTrack;
    int a[n];
	for(i = 0; i < n; i++){
		cin >> item;
		keepTrack[item] = item;
		a[i] = item;
		}
	for(i = 0; i < n; i++){
		if ( keepTrack.find(a[i] - k) == keepTrack.end() ) {
				;
			} else 
			result++;
		}
    cout << result << endl;
    return 0;
}
