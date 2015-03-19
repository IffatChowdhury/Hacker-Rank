/*You are given a list of N people who are attending ACM-ICPC World Finals. 
 * Each of them are either well versed in a topic or they are not. Find out the 
 * maximum number of topics a 2-person team can know. And also find out how many teams 
 * can know that maximum number of topics.

Note Suppose a, b, and c are three different people, then (a,b) and (b,c) are counted as 
* two different teams.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N, M, i = 0;
    int j, k;
    int count = 0, maxCount = -1, team = 0;
    string str;
    cin >> N >> M;
    char storage[N][M];
    for(k = 0; k < N; k++){
		cin >> str;
		for(j = 0; j < M; j++){
			storage[i][j] = str[j];
			}
		i++;
		}  
	
	for(i = 0; i < N; i++){
		for(j = i + 1; j < N; j++){
			count = 0;
			for(k = 0; k < M; k++){
				if ( (storage[i][k] - '0') | (storage[j][k] - '0') ){
					count += 1;
					}
				}//for loop k
				if (count > maxCount){
					maxCount = count;
					team = 1;
					}
				else if (count == maxCount){
					team += 1;
					}
				else{}
			}//for loop j
		}//for loop i
	cout << maxCount << endl << team << endl;
    return 0;
}
