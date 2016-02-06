/*
Input Format

The first line contains T, denoting the number of test cases. 
First line of each test case has two integers N, denoting the number of nodes in the graph and M, denoting the number of edges in the graph. 
The next M lines each consist of two space separated integers x y, where x and y denote the two nodes between which the edge exists. 
The last line of a testcase has an integer S, denoting the starting position.

Output Format

For each of T test cases, print a single line consisting of N−1 space-separated integers, denoting the shortest distances of the N-1 nodes from starting position S. This will be done for all nodes same as in the order of input 1 to N.

For unreachable nodes, print −1.
*/

#include <iostream>
#include <list>
#include <vector>
#include <iterator>

using namespace std;

	
class Solution{
	public:
	vector < list<int> > adjList;
	
	Solution(int n) : adjList(n) { }
		
	void addEdge(int a, int b){
		adjList[a].push_back(b);		
		return;
		}
	
	
	void printGraph(){
		for(int i = 0; i < (int) adjList.size(); i++){
			for(list <int> :: iterator j = adjList[i].begin(); j != adjList[i].end(); j++){
				cout << *j << " ";
				}
			cout << endl;
			}
		}
		
	void BFSShortestReach(int start, int noVertex){
		bool visited[noVertex + 1];
		int distance[noVertex + 1];
		for(int i = 0; i < noVertex + 1; i++){
			visited[i] = false;
			distance[i] = 0;
		}
		vector <int> Q(noVertex + 1);
		
		int rear, front;
		rear = front = 0;
		int source = start;
		Q[front++] = source;
		visited[source] = true;
			
		while(rear != front){
			source = Q[rear++];
			
			for(list <int> :: iterator j = adjList[source].begin(); j != adjList[source].end(); j++){
				if(visited[*j] == false){
					Q[front++] = *j;
					visited[*j] = true;
					distance[*j] = distance[source] + 6;
					}
				}
			}
		for(int index = 1; index < noVertex + 1; index++){
			if(index != start){
				if(distance[index] == 0)
					cout << -1 << " ";
				else
					cout << distance[index] << " ";
				}
			}
		cout << endl;
		return;
		}
};		
		
int main(){
	
	int t;
	cin >> t;
	while(t--){
		int noVertex, noEdge;
		cin >> noVertex >> noEdge;
		Solution ob(noVertex + 1);
		while(noEdge--){
			int a, b;
			cin >> a >> b;
			ob.addEdge(a, b);
			ob.addEdge(b, a);
		}
		int start;
		cin >> start;
		//ob.printGraph();
		ob.BFSShortestReach(start, noVertex);
	}
	
	return 0;
}

