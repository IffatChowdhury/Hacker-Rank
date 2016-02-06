/*Little Bob loves chocolate, and he goes to a store with $N in his pocket. 
 * The price of each chocolate is $C. The store offers a discount: for every M 
 * wrappers he gives to the store, he gets one chocolate for free. How many 
 * chocolates does Bob get to eat?
 * */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer = 0;
        int wrapper = 0;
        // Computer answer
        answer += n / c;
        wrapper = answer;
        while (wrapper >= m){
			int extraChoc = wrapper / m;
			wrapper -= extraChoc * m;
			answer += extraChoc;
			wrapper += extraChoc;
			}
        cout<<answer<<endl;
    }
    return 0;
}
