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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int k)
{
    if(head == NULL || k == 0){
        return head;
    }
    LinkedListNode<int>* temp = new LinkedListNode<int>(1);
    LinkedListNode<int>* slowptr = temp;
    LinkedListNode<int>* fastptr = temp;
    temp->next = head;
    for(int i = 0; i < k; i++){
        fastptr = fastptr->next;    
    }
    while(fastptr->next != NULL){
        fastptr = fastptr->next;
        slowptr = slowptr->next;
    }
    slowptr->next = slowptr->next->next;
    return temp->next;  
}