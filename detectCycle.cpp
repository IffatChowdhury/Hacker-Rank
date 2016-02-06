/*
You’re given the pointer to the head node of a linked list. Find whether the list contains any cycle (or loop). A linked list is said to contain cycle if any node is re-visited while traversing the list. The head pointer given may be null meaning that the list is empty.
*/

/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   // Complete this function
   // Do not write the main method
    if (head == NULL || head -> next == NULL)
		return 0;
	else{
		Node *tortoise, *hare;
		tortoise = head;
		hare = head -> next;
		while (hare -> next != NULL){
			tortoise = tortoise -> next;
			hare = hare -> next -> next;
			if (tortoise == hare)
				return 1;
			}
		}
	return 0;
}
