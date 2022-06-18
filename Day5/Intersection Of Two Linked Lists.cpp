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


int findIntersection(Node *firstHead, Node *secondHead)
{
    Node* temp1 = firstHead;
    Node* temp2 = secondHead;
    while(temp1 != temp2){
        temp1 = temp1 == NULL ? secondHead : temp1 = temp1->next;
        temp2 = temp2 == NULL ? firstHead : temp2 = temp2->next;
    }
    return (temp1 == NULL)? -1 : temp1->data;
}