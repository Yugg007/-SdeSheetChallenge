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


bool detectCycle(Node *head)
{
    if (head == NULL || head->next == NULL){return false;}
    Node *slow = head;
    Node *fast = head->next;
    
    while (slow != fast){
        if (fast == NULL || fast->next == NULL){return false;}
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}