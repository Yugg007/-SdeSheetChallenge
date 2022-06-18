#include <bits/stdc++.h> 

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


void deleteNode(LinkedListNode<int> * node) {
    if(node->next == NULL){
        node = NULL;
        return;
    }
    int val = node->next->data;
    node->next = node->next->next;
    node->data = val;
    return;
}