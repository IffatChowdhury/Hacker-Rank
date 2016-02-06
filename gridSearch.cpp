
/*
Input Format 
The first line contains an integer, T, which is the number of test cases. T test cases follow, each having a structure as described below: 
The first line contains two space-separated integers, R and C, indicating the number of rows and columns in the grid G, respectively. 
This is followed by R lines, each with a string of C digits, which represent the grid G. 
The following line contains two space-separated integers, r and c, indicating the number of rows and columns in the pattern grid P. 
This is followed by r lines, each with a string of c digits, which represent the pattern P.

Output Format 
Display 'YES' or 'NO', depending on whether (or not) you find that the larger grid G contains the rectangular pattern P. The evaluation will be case sensitive.
*/
#include <iostream>
#include <vector>
#include <string>


using namespace std;

bool gridSearchPattern(int R, int C, vector<string>& G, int r, int c, vector<string>& P){
	int flag = 0, G_i, G_i_j, i;
	for(G_i = 0;G_i < R - (r - 1);G_i++){
		for(G_i_j = 0; G_i_j < C - (c - 1); G_i_j++){
			string tempStr = G[G_i].substr(G_i_j, c);
			//cout << endl << tempStr << endl;
			if (tempStr == P[0]){
				for(i = 1; i < r; i++){
					string temp = G[++G_i].substr(G_i_j, c);
					//cout << temp << endl;
					if (temp != P[i])
						break;
				}
				if (i == r)
					flag = 1;
			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			return true;
	}
	return false;
	//cout << "G_i " << G_i << endl;
	//cout << "G_i_j " << G_i_j << endl;
}




int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
		}
        
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
		}
        bool result = gridSearchPattern(R, C, G, r, c, P);
        if (result == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
    return 0;
}
