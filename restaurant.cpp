/*Martha is interviewing at Subway. One of the rounds of the interview requires her to cut a bread of size l×b into smaller 
 * identical pieces such that each piece is a square having maximum possible side length with no left over piece of bread.
 * 
 * */
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int T;
    cin >> T; 
    long int l, b, result;
    
    while(T--){
		cin >> l;
		cin >> b;
		result = 0;
	
		int gcdCompute = gcd(l, b); 
		result = l / gcdCompute;
		result = result * (b / gcdCompute);
		cout << result << endl;
	}
	return 0;
}

