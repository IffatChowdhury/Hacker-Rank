/*Your teacher has given you the task to draw the structure of a staircase. 
 * Being an expert programmer, you decided to make a program for the same. 
 * You are given the height of the staircase. You need to print a staircase 
 * as shown in the example.
 * */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long int number;
    cin >> number;
    long int spaceCount = number;
    long int hashCount = 0;
    for(long int i = 0; i < number; i++){
		spaceCount--; hashCount++;
		for(long int j = 0; j < spaceCount; j++){
			cout << " " ;
		}
		for(long int k = 0; k < hashCount; k++){
			cout << "#";
		}
		cout << endl;
	}  
    return 0;
}
