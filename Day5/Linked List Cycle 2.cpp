#include <bits/stdc++.h> 

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };


Node *firstNode(Node *head)
{
    if(head == NULL||head->next == NULL) return NULL;        
    Node* fast = head;
    Node* slow = head;
    Node* temp = head;        
    while(fast->next != NULL&&fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;            
        if(slow == fast) {
            while(slow != temp) {
                slow = slow->next;
                temp = temp->next;
            }
            return slow;
        }
    }
    return NULL;
}