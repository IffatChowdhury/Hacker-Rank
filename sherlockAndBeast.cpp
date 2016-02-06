/*
Input Format

The first line is an integer, T, denoting the number of test cases.

The T subsequent lines each contain an integer, N, detailing the number of digits in the number.

Output Format

Print the largest Decent Number having N digits; if no such number exists, tell Sherlock by printing -1.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int t, i, noOf3s = -1, noOf5s = -1;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        noOf3s = -1;
        noOf5s = -1;
        if (n == 1)
			cout << -1 << endl;
		else{
			
			int div = n / 3;
			
			while(div != 0){
				int remainNo =  n - 3 * div;
				//cout << remainNo << endl;
				if (remainNo % 5 == 0){
					noOf3s = remainNo;
					noOf5s = n - remainNo;
					break;
					}
				else div--;
				}
			if (n % 5 == 0 && noOf3s == -1 && noOf5s == -1)
				noOf3s = n;
			if (noOf3s == -1 && noOf5s == -1)
				cout << -1 << endl;
			else{
				for(i = 0; i < noOf5s; i++)
					cout << 5;
				for(i = 0; i < noOf3s; i++)
					cout << 3;
				cout << endl;
				}
			}
    }
    return 0;
}

