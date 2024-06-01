#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* prev;
    node* next;
    node(int data)
    {
        val=data;
        prev=NULL;
        next=NULL;

    }
    
};
class DoublyLinkedList{
    public:
    node* head;
    node* tail;
    DoublyLinkedList()
    {
        head=NULL;
        tail=NULL;

    }
};
int main(){
    
    node* new_node=new node(3);
    DoublyLinkedList dll;
    dll.head=new_node;
    dll.tail=new_node;
    cout<<dll.head->val<<endl;
    return 0;
}