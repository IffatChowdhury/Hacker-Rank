/*There are N integers in an array A. All but one integer occur in pairs. 
 * Your task is to find the number that occurs only once.*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int lonelyinteger(vector < int > a) {
	map<int, int> mapping;
	for(int i = 0; i < (int)a.size(); i++){
		mapping[a[i]] += 1;
		//cout << mapping[A[i]] << " " << A[i] << endl;
		}
	for(int i = 0; i < (int)a.size(); i++){
		if ( mapping[a[i]] == 1)
			return a[i];
		}
		
	return 0;
	}
	
	
int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
