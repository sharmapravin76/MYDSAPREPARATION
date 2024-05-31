#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;

    node(int data)
    {
        val=data;
        next=NULL;
    }
};
void insertathead(node* &head,int val)
{
    node* new_node=new node(val);
    new_node->next=head;
    head=new_node;


}
void insertattail(node* &head,int val)
{
    node* new_node=new node(val);
    node*  temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    //temp has reached last node
    temp->next=new_node;
}
void insertatposition(node* &head,int val,int pos)
{
    if(pos==0)
    {
        insertathead(head,val);
        return;

    }
    node* new_node=new node(val);
    node* temp=head;
    int current_pos=0;
    while (current_pos!=pos-1)
    {
        /* code*/
        temp=temp->next;
        current_pos++;


    }
    //temp is pointing to node at pos-1;
    new_node->next=temp->next;
    temp->next=new_node;
    

}
void updateatposition(node* &head,int k,int val)
{
    node* temp=head;
    int current_pos=0;
    while(current_pos!=k)
    {
        temp=temp->next;
        current_pos++;
    }
    //temp will be pointing to the kth node;
    temp->val=val;
    

}
void deletathead(node* &head)
{
    node* temp=head;
    head=head->next;
    free(temp);
}
void deletattail(node* &head)
{
    node* second_last=head;
    while(second_last->next->next!=NULL)
    {
        second_last=second_last->next;

    }
    //now second_last points to second last node
    node* temp=second_last->next;//node to be deleted
    second_last->next=NULL;
    free(temp);

}
void deletatposition(node* &head,int pos)
{
    if(pos==0)
    {
        deletathead(head);
        return;

    }
    int current_pos=0;
    node* prev=head;
    while(current_pos!=pos-1)
    {
        prev=prev->next;
        current_pos++;
    }
    //prev is pointing to node at pos-1
   node* temp=prev->next;//node to be deleted
   prev->next=prev->next->next;
   free(temp);



}

void display(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node* head=NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    display(head);
    insertattail(head,3);
    display(head);
    insertatposition(head,4,1);
    display(head);
    updateatposition(head,2,5);
    display(head);
    // deletathead(head);
    // display(head);
    // deletattail(head);
    // display(head);
    deletatposition(head,1);
    display(head);
    return 0;
}