/*
The Head Librarian at a library wants you to create a program that calculates the fine for returning a book after the return date. You are given the actual and the expected return dates. Calculate the fine as follows:

If the book is returned on or before the expected return date, no fine will be charged. In other words, the fine is 0.
If the book is returned in the same calendar month as the expected return date, the fine = 15 Hackos × the number of late days.
If the book is not returned in the same calendar month but in the same calendar year as the expected return date, the fine = 500 Hackos × the number of late months.
If the book is not returned in the same calendar year, the fine is fixed at 10000 Hackos.
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
int calculateFine(int d1, int m1, int y1, int d2, int m2, int y2){
	int fine = 0;
	if (y1 > y2){
		fine = 10000;
		}
	else if (y1 < y2)
		return fine;
	else{
		if (m1 > m2){
			fine = 500 * (m1 - m2);
			}
		else if (m1 < m2)
			return fine;
		else{
			if (d1 > d2)
				fine = 15 * (d1 - d2);
			}
		}
	return fine;
	}

int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    int fine = calculateFine(d1, m1, y1, d2, m2, y2);
    cout << fine << endl;
    return 0;
}

