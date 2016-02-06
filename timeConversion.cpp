/*
Input Format

A time in 12-hour clock format (i.e.: hh:mm:ssAM or hh:mm:ssPM), where 01≤hh≤12.

Output Format

Convert and print the given time in 24-hour format, where 00≤hh≤23.

Sample Input
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string time;
    cin >> time;

    string output = time.substr(0, 8);
    string ampm = time.substr(time.size() - 2);
    string hourString = time.substr(0, 2);

    if (ampm == "PM" && hourString != "12") {
        //int hour = stoi(hourString);
     
		int hour;
		istringstream ( hourString ) >> hour;
        hour = (hour + 12);

        stringstream ss;
        ss << hour;

        output[0] = ss.str()[0];
        output[1] = ss.str()[1];
    }
    else if (ampm == "AM" && hourString == "12") {
        output[0] = output[1] = '0';
    }

    cout << output;

    return 0;
}
 
