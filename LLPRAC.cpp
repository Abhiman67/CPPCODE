#include<iostream>
using namespace std;

class Node {
 
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
        newnode->Next=Head;
        Head=newnode;

        

    }
}

void insertatTail(int val){

    Node*newnode= new Node(val);

    if(Head==NULL){
        Head=Tail=NULL;

    }
    else {
        Tail->Next=newnode;
        Tail=newnode;

    }
}

void Printll() {
    Node*Temp=Head;

    while (Temp!=NULL)
    {    cout << Temp->data << "  ->  " ;
        Temp=Temp->Next;
   }
    

}


void insertatpos(int val,int pos){
    Node*newnode= new Node(val);
    Node*temp = Head;
    
    if(pos==1){

        inserathead(val);
        return;
    }
    for(int i=0;i<pos-1;i++){
        temp=temp->Next;
    }
    newnode->Next=temp->Next;
    temp->Next=newnode;

}
void icdelete(int val){
    Node*newnode= new Node (val);

    if(Head!=NULL){
        delete Head;

    }

}

// void deletehead (int val) {

//     Node*newnode= new Node(val) ;
//     Node*temp=Head;

//     Head=Head->Next;
//     temp->Next=NULL;

//     free(temp);

    

// }
// void deleteback(int val){
//     Node*newnode=new Node(val);
//     Node*temp=Head;
//     while(temp->Next->Next!=NULL){
//         temp=temp->Next;

//     }

//     temp->Next=NULL;
//     delete Tail;
//     Tail=temp;


// }



};



int main(){
    list ll ;

    ll.inserathead(10);
    ll.inserathead(20);
    ll.inserathead(30);
    ll.insertatTail(10);
    ll.insertatTail(20);
    ll.insertatTail(30);
    ll.insertatpos(196,1);
    // ll.deletehead(10);
    // ll.deleteback(10);
    // ll.search(10,30);
    ll.Printll();
}