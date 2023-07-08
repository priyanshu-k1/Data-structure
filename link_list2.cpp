#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node * next;
    Node(int num){
        data=num;
        next=NULL;
    }
    void insert_head(Node * &head,int num){
        Node* new_node=new Node(num);
        new_node->next=head;
        head=new_node;
    }
}
  
int main(){

return 0;
}