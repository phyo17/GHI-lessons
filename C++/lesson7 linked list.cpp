#include<iostream>
#include<stdio.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
void print(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
void push(Node **head_ref,int new_data){
    Node*new_node=new Node();

    new_node->data=new_data;

    new_node->next=(*head_ref);

    (*head_ref)=new_node;
}
void append(Node **head_ref,int new_data){
    Node*new_node=new Node();
    Node*last=(*head_ref);
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new_node;
    return;
}
int main(){

Node *head=NULL;
Node *second=NULL;
Node *third=NULL;

head=new Node();
second=new Node();
third=new Node();

head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=NULL;

print(head);
printf("\n");
push(&head,10);
print(head);
printf("\n");
append(&head,99);
print(head);


return 0;
}
