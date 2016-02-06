/*Numeros, the Artist, had two lists A and B, such that B was a permutation of A. 
 * Numeros was very proud of these lists. Unfortunately, while transporting them from 
 * one exhibition to another, some numbers were left out of A. Can you find the missing numbers?
 * 
 * */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long int noOfElem1, noOfElem2;
    long int element;
    map<long int, long int> wholeList1;
    map<long int, long int> wholeList2;
    	
    //ifstream myReadFile;
	//myReadFile.open("input.txt");
    cin >> noOfElem1;
    
    long int i = 0;
    for (; i < noOfElem1; i++){
		
		cin >> element;
		wholeList1[element]++;
	}
	
	cin >> noOfElem2;
	
	long int j = 0;
    for (; j < noOfElem2; j++){
		
		cin >> element;
		wholeList2[element]++;
	}
	
	vector<long int> arrayList;
	for(map<long int, long int >::const_iterator it = wholeList1.begin(); it != wholeList1.end(); ++it){
		if (it -> second != wholeList2[it -> first]){
			//cout << it -> second << " " << it -> first << endl;
			arrayList.push_back(it -> first);
		}
	}
	sort (arrayList.begin(), arrayList.end());
	for (long int k = 0; k < (long int)arrayList.size(); k++) {
            cout << arrayList[k] << " ";
        }
    
    //myReadFile.close();  
    return 0;
}
