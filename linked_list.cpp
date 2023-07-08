#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node* next;

    Node(int val){ 
        data = val;
        next=NULL;
    }
};
void insert_at_tail(Node* &head,int val){
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next; 
    }
    temp->next = new_node;
}

void search(Node* head,int val){
    Node* temp=head;
    int i=0,flag=0;
    while(temp!=NULL){
        if(temp->data==val){
            cout<<"\nThe element is present at index "<<i<<endl;
            flag=1;
        }
        i++;
        temp=temp->next;
    }
    if(flag==0){
        cout<<"\nThe element is absent\n";
    }
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    display(head);
    // search(head,5);
    return 0;
}