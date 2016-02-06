/*
Input Format

There will be two lines of input:
H, representing the hours
M, representing the minutes

Output Format

Display the time in words.
*/

#include <map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

map <int, string> create_map()
{
  map <int, string> m;
  m[1] = "one";
  m[2] = "two";
  m[3] = "three";
  m[4] = "four";
  m[5] = "five";
  m[6] = "six";
  m[7] = "seven";
  m[8] = "eight";
  m[9] = "nine";
  m[10] = "ten";
  m[11] = "eleven";
  m[12] = "twelve";
  m[13] = "thirteen";
  m[14] = "fourteen";
  m[15] = "fifteen";
  m[16] = "sixteen";
  m[17] = "seventeen";
  m[18] = "eighteen";
  m[19] = "nineteen";
  m[20] = "twenty";
  m[21] = "twenty one";
  m[22] = "twenty two";
  m[23] = "twenty three";
  m[24] = "twenty four";
  m[25] = "twenty five";
  m[26] = "twenty six";
  m[27] = "twenty seven";
  m[28] = "twenty eight";
  m[29] = "twenty nine";
  return m;
}


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    map <int, string> mapped = create_map();

    if (m == 15)
		cout << "quarter past " << mapped[h] << endl;
	else if (m == 0)
		cout << mapped[h] << " o' clock" << endl;
	else if (m == 30)
		cout << "half past " << mapped[h] << endl;
	else if (m == 45 && h == 12)
		cout << "quarter to " << 1 << endl;
	else if (m == 1)
		cout << mapped[m] << " minute past " << mapped[h] << endl;
	else if (m == 45)
		cout << "quarter to " << mapped[h + 1] << endl;
	else if (m < 30)
		cout << mapped[m] << " minutes past " << mapped[h] << endl;
	else if (m > 30)
		cout << mapped[60 - m] << " minutes to " << mapped[h + 1] << endl;
	
    return 0;
}
