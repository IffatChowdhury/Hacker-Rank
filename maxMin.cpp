/*Given a list of N integers, your task is to select K integers from the list such 
 * that its unfairness is minimized.

if (x1,x2,x3,…,xk) are K numbers selected from the list N, the unfairness is defined as

max(x1,x2,…,xk)−min(x1,x2,…,xk)

where max denotes the largest integer among the elements of K, and min denotes the 
* smallest integer among the elements of K. */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N, K, unfairness = INT_MAX;
    int j, k;
    cin >> N >> K;
    int list[N];
    for (int i=0; i<N; i++)
        cin >> list[i];
    
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
    sort(list, list + N);
    for (j = 0, k = K - 1; k < N; j++, k++){
		if (unfairness > (list[k] - list[j]) )
			unfairness = list[k] - list[j];
		}
    cout << unfairness << "\n";
    return 0;
}
