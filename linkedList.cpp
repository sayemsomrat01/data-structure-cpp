#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node* next;
};
void printLinkedList(node* ptr){
    int i = 1;
    while (ptr!=NULL)
    {   
        cout<<"Node ["<<i<<"] : data  = "<<ptr->data<<endl;
        ptr = ptr->next;
        i++;
    }
    
}
int main(){
    /*
        create node as the number we need
    */
    node* head, *first_node, *second_node, *third_node,*fourth_node, *fifth_node;
    /*
        initialize with dynamic memory allocation
    */
    head = new node();
    first_node = new node();
    second_node = new node();
    third_node = new node();
    fourth_node = new node();
    fifth_node = new node();

    head->data = 10;
    head->next = first_node;

    first_node->data = 20;
    first_node->next = second_node;

    second_node->data = 30;
    second_node->next = third_node;

    third_node->data = 40;
    third_node->next = fourth_node;

    fourth_node->data = 50;
    fourth_node->next = fifth_node;

    fifth_node->data = 60;
    fifth_node->next = NULL;

    printLinkedList(head);
    return 0;
}