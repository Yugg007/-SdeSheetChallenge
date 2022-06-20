#include <bits/stdc++.h> 

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    LinkedListNode<int> *tempIt = head;
    while(tempIt != NULL){
        LinkedListNode<int> *front = tempIt->next;
        LinkedListNode<int> *dummy = new LinkedListNode<int> (tempIt->data);
        dummy->next = tempIt->next; 
         tempIt->next = dummy;
        tempIt = front;
    }
   tempIt = head;
   while(tempIt != NULL){
        tempIt->next->random = tempIt->random;
        tempIt = tempIt->next->next;
   }
   tempIt = head;
   LinkedListNode<int>* copy = new LinkedListNode<int> (0);
   LinkedListNode<int> *newnode = copy;
   while(tempIt != NULL){
        LinkedListNode<int> *front = tempIt->next->next;
        copy->next = tempIt->next;
        tempIt->next = front;
        tempIt = front;
        copy = copy->next;
   }
    return newnode->next  ;
}
