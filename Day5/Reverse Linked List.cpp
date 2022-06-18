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
    LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head == NULL){
        return head;
    }
    LinkedListNode<int>* temp = head->next;
    LinkedListNode<int>* prev = head;
    prev->next =NULL;
    while(temp != NULL){
        head = temp;
        temp = temp->next;
        head->next = prev;
        prev = head;
    }
    return head;
    
}