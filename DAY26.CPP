#include<iostream>
using namespace std;

// class Node{
    
//     public:
//     int Data;
//     Node*Prev;       
//     Node*Next;

//     Node(int d){
//         Data=d;
//         Node*Prev=NULL;
//         Node*Next=NULL;
//     }

// };

// void print(Node*Head){
//     Node*temp=Head;
    
//     while(temp!=NULL){
//         cout << temp->Data;
//         temp=temp->Next;
//      cout << "   ";
//     }
    
//     cout << endl;

// }
// int getlen(Node*Head){

//     Node*temp=Head;
//     int cnt=0;

//     while(temp!=NULL){
//        cnt++;
//        temp=temp->Next;
//     }
//     cout << cnt;


// }

// void InsertAtHead(Node* &Head,int d){
//     Node*temp= new Node(d) ;
//     temp->Next=Head;
//     Head->Prev=temp;
//     Head=temp;
// }

// void InsertAtTail(Node*&Tail,int d){
//     Node *temp = new Node(d);
//     Tail->Next=temp;
//     temp->Prev=Tail;
//    Tail=temp;

// }

// void InsertAtPosition(Node*&Head,int pos,int d){

//     if(pos==1){
//         InsertAtHead(Head,d);
//         return;
        
//     }



// }


// Node * DeleteAtHead(Node*&Head){

//     if(Head==NULL){
//         return NULL;
        
//     }
//     else{
//         Node*temp=Head;
//         Head=Head->Next;
//         temp->Next=NULL;

//         delete temp;
//         return Head;
        
//     }

// }

// Node *DeleteAtTail(Node*&Head){
//     if(Head==NULL){
//         return NULL ;

//     }

//     else{
//         Node *Tail = Head;
//         while (Tail->Next !=NULL)
//         {
//             Tail=Tail->Next;
            
//         }
        
//     }
// }

// int main(){

//     Node*newnode= new Node(10);
//     Node*Head=newnode;
//     Node*Tail=newnode;

//     InsertAtHead(Head,69);
//     InsertAtTail(Tail,96);
//    Head = DeleteAtHead(Head);
//     print(Head);

 
//     return 0;
// }

////