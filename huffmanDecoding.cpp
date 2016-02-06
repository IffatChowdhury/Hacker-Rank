/*
Huffman coding assigns variable length codewords to fixed length input characters based on their frequencies. More frequent characters are assigned shorter codewords and less frequent characters are assigned longer codewords. A huffman tree is made for the input string and characters are decoded based on their position in the tree. We add a '0' to the codeword when we move left in the binary tree and a '1' when we move right in the binary tree. We assign codes to the leaf nodes which represent the input characters.
*/

/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    node * currentNode = root;
	int len = s.length();
	for(int i = 0; i < len; i++){
		if(s[i] == '0'){
			if(currentNode -> left != NULL)
				currentNode = currentNode -> left;
			if (currentNode -> left == NULL && currentNode -> right == NULL){
				cout << currentNode -> data;
				currentNode = root;
			}
		}
		else{
			if(currentNode -> right != NULL)
				currentNode = currentNode -> right;
			if (currentNode -> right == NULL && currentNode -> left == NULL){
				cout << currentNode -> data;
				currentNode = root;
			}
		}
	}
	return;	
}
