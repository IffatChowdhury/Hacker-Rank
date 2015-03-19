/*The Utopian Tree goes through 2 cycles of growth every year. The first growth cycle occurs during the spring, when it doubles in height. 
 * The second growth cycle occurs during the summer, when its height increases by 1 meter.

Now, a new Utopian Tree sapling is planted at the onset of spring. Its height is 1 meter.
*  Can you find the height of the tree after N growth cycles?*/


#include <iostream>
using namespace std;

int height(int n) {
	int treeHeight = 1;
	for(int i = 0; i < n; i++){
		if ( (i % 2) == 0){
			treeHeight = treeHeight * 2;
			}
		else{
			treeHeight += 1;
			}
		}
    return treeHeight;
}


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
