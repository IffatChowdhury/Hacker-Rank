/*
You and K−1 friends want to buy N flowers. Each flower fi has some cost ci. The florist is greedy and wants to maximize his number of new customers, so he increases the sale price of flowers for repeat customers; more precisely, if a customer has already purchased x flowers, price P for fi is Pfi=(x+1)×ci.

Find and print the minimum cost for your group to purchase N flowers.
*/

/* Sample program illustrating input/output */
#include <iostream>
#include <algorithm>
using namespace std;

int flowersBuy(int C[], int N, int K){
	int result = 0, j = 1, ratio = 1;
	sort(C, C + N);
	for(int i = N - 1; i > -1; i--){
		if(j > K){
			ratio++;
			j = 1;
		}
		result = result + (ratio * C[i]);
		j++;		
	}
	return result;
}

int main(void){

   int N, K;
   cin >> N >> K;
   int C[N];
   for(int i = 0; i < N; i++){
      cin >> C[i];
   }
   
   int result = flowersBuy(C, N, K);
   cout << result << "\n";
   return 0;
}
 
