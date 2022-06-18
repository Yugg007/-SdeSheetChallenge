#include <bits/stdc++.h> 

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

Node* merge(Node* a,Node* b){
   Node *head = new Node(0);
    Node *temp = head;
   while(a != NULL && b != NULL){
       if(a->data < b->data){
           temp->child = a;
           temp = a;
           a = a->child;
       }
       else{
            temp->child = b;
            temp = b;
            b = b->child;
       }
   }
   if(a != NULL){
       temp->child = a;
   }
   if(b != NULL){
       temp->child=b;
   }
   return head->child;
}
Node* flattenLinkedList(Node* head) 
{
	if(head==NULL || head->next==NULL) return head;
   head->next=flattenLinkedList(head->next); 
   head = merge(head,head->next);
   return head;
}
