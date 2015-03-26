/*Animesh has N empty candy jars, numbered from 1 to N, with infinite capacity. 
 * He performs M operations. Each operation is described by 3 integers, a, b, and k. 
 * Here, a and b are indices of the jars, and k is the number of candies to be added 
 * inside each jar whose index lies between a and b (both inclusive). Can you tell the 
 * average number of candies after M operations?*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long int M, a, b, k;
    unsigned long long int sum = 0, N;
    cin >> N;
    cin >> M;
    while(M != 0){
		cin >> a >> b >> k;
		sum += (b - a + 1) * k;
		M--;
		}
	cout << (sum / N) << endl;
    return 0;
}

