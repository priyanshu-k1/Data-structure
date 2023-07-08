#include<iostream>
using namespace std;

class Stack(){
public:
    int data;
    int size;
    int* arr;
    int top;
    Stack(int x){
        size = x;
        arr = new int[size];
        top=-1;
    }
    void push(int x){
        if(top>size){
            cout<<"Stack overflow\n";
        }
        else{
            top++;
            arr[top] = x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow\n";
        }
        else{
            top--;
        }
    }
    void display(){
        for(int i=0; i<top; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}

int main(){

return 0;
}