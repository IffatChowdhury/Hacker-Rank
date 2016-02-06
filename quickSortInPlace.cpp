/*
Input Format 
There will be two lines of input:

n - the size of the array
ar - the n numbers of the array
Output Format 
Print the entire array on a new line at the end of every partitioning method.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int noOfItem;

int partition(int A[], int lo, int hi);

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void quicksort(int A[], int lo, int hi) {
	if (lo < hi){
		int p = partition(A, lo, hi);
		for(int i = 0; i < noOfItem; i++){
			cout << A[i] << " ";
		}
		cout << endl;
        quicksort(A, lo, p - 1);
        quicksort(A, p + 1, hi);
	}
    return;
}
    

int partition(int A[], int lo, int hi){
	int pivot = A[hi];
	int i = lo;
    for (int j = lo; j < hi; j++){
		if (A[j] <= pivot){
			swap(&A[i], &A[j]);
            i = i + 1;
		} 
	}
    swap(&A[i], &A[hi]);
    return i;   
}
    

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int item, i;
    cin >> noOfItem;
    int a[noOfItem];
    for(i = 0; i < noOfItem; i++){
		cin >> item;
		a[i] = item;
	}
	
	quicksort(a, 0, noOfItem - 1);
	
    return 0;
}
