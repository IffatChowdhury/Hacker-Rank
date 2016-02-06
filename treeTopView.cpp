/*
You are given a pointer to the root of a binary tree. Print the top view of the binary tree. 
*/

/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root)
{
 int stack[10000];
	int top = -1;
	node *temp;
	temp = root;
	while(temp -> left != NULL){
		stack[++top] = temp -> data;
		temp = temp -> left;
		}
	stack[++top] = temp -> data;
	while(top != -1){
		cout << stack[top--] << " ";
		}
		
	temp = root -> right;
	while(temp -> right != NULL){
		cout << temp -> data << " ";
		temp = temp -> right;
		}
	cout << temp -> data << endl;
  
}
