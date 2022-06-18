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

Node *findMiddle(Node *head) {
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    len = len/2 + 1; 
    temp = head;
    while(--len){
        temp = temp->next;
    }
    return temp;
}