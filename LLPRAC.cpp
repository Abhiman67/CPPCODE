#include<iostream>
using namespace std;

class Node() {

    public:
    int data;
    Node*Next;

    Node(int n){
        data=n;
        Next=NULL;

    }

};

class list{
    public:

    Node*Head;

    Node*Tail;

    list(){

        Head=NULL;
        Tail=NULL;

    }



    void printll(int val){
    Node*temp=Head;
    while (temp!=NULL)
    {
        cout << temp->data;
        temp=temp->Next;

    }
    cout << "null";
    
}

void inserathead(int val){
    Node*newnode= new Node(val);
    if(Head==NULL){
        Head=Tail=newnode;

    }
    else {
        

    }
}


};



int main(){

    list.ll;



}