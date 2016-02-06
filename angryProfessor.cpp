/*
A Discrete Mathematics professor has a class of N students. Frustrated with their lack of discipline, he decides to cancel class if fewer than K students are present when class starts.

Given the arrival time of each student, determine if the class is canceled.
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdio>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

bool detectCancel(int k, vector<int>& a){
	int count = 0;
	for(int i = 0; i < (int) a.size(); i++){
		if (a[i] <= 0)
			count++;
		if (count == k)
			return false;
		}
	return true;
	}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        bool result = detectCancel(k, a);
        if (result == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
    }
    return 0;
}

