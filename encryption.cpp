/*
An English text needs to be encrypted using the following encryption scheme. 
First, the spaces are removed from the text. Let L be the length of this text. 
Then, characters are written into a grid, whose rows and columns have the following constraints:

⌊L−−√⌋≤rows≤column≤⌈L−−√⌉, where ⌊x⌋ is floor function and ⌈x⌉ is ceil function
For example, the sentence if man was meant to stay on the ground god would have given us roots after removing spaces is 54 characters long, so it is written in the form of a grid with 7 rows and 8 columns.
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution{
	
	public:
	void encryption(string a){
		int size = a.size();
		//cout << size << endl;
		double squareRoot =  sqrt(size);
		//cout << squareRoot << endl;
		int column = ceil(squareRoot);
		int row = floor(squareRoot);
		//cout << row << endl;
		//cout << column << endl;
		if ( (row * column) < size)
			row++;
		char result[row][column];
		int i, j;
		for(i = 0; i < row; i++)
			for(j = 0; j < column; j++)
				result[i][j] = '0';
		int index = 0;
		for(i = 0; i < row; i++){
			for(j = 0; j < column; j++){
				result[i][j] = a[index];
				//cout << result[i][j]<< index << " ";
				index++;
				if(index == size)
					break;
				}
			//cout << endl;
			//cout << "size " << size << endl;
			//cout << "index " << index << endl;
			if (index == size){
				//cout << "inside break " << index << endl;
				break;
				}
			}
		for(i = 0; i < column; i++){
			
			for(j = 0; j < row; j++){
				if(result[j][i] != '0')
					cout << result[j][i];
				}
			if (i != column)
				cout << " ";
			}
		return;
		}
	
	
	
	};

int main(){
	string input;
	cin >> input;
	Solution ob;
	ob.encryption(input);
	return 0;
	}
