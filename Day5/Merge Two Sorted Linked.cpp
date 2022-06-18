#include <bits/stdc++.h> 

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
     Node<int>* result = NULL;
    if (first == NULL){return second;}
    else if (second == NULL){return first;}
 
    if (first->data <= second->data){
        result = first;
        result->next = sortTwoLists(first->next, second);
    }
    else{
        result = second;
        result->next = sortTwoLists(first, second->next);
    }
    return result;
}
