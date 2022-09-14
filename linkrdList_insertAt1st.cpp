#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node * next;
};
node* insertAtfirst(node *head, int data){
    node * ptr = new node();
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
void linkedListTraverse(node *ptr){
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
}
int main(){
    node *head, *first,*scnd,*thrd;
    head = new node();
    first = new node();
    scnd = new node();
    thrd = new node();

    head->data = 10;
    head->next=first;

    first->data = 20;
    first->next = scnd;

    scnd->data = 30;
    scnd->next = thrd;

    thrd->data = 40;
    thrd->next = NULL;
    head=insertAtfirst(head,60);
    cout<<head->data <<endl;
    cout<<"\n"<<endl;
    linkedListTraverse(head);
    return 0;
}