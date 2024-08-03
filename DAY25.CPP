#include<iostream>
using namespace std;

class Node {
    int data;
    Node*Next;

    public:
    Node(int n){
        
        data=n;
        Next=NULL;

    }


};

class List {
    Node*head;
    Node*tail;

    public:
    List(){
        head=NULL;
        tail=NULL;


    }


};



int main(){
    

    List ll(10);

    return 0;
}