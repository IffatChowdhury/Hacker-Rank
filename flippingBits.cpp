/*You will be given a list of 32 bits unsigned integers. 
 * You are required to output the list of the unsigned integers you 
 * get by flipping bits in its binary representation (i.e. unset bits 
 * must be set, and set bits must be unset).
 * */
 
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned int t, number;
    cin >> t;  
    while(t--){
		cin >> number;
		number = number ^ 0xffffffff;
		cout << number << endl;
		}
    return 0;
}

