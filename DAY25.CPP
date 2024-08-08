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
    ~Node(){
        if(Next != NULL){
            delete Next;
            free(Next);

            Next=NULL;
        }
    }

 
};

class List {
    public:
    Node*head;
    Node*tail;

    List(){
        head=NULL;
        tail=NULL;


    }

    /// PUSHFRONT

    void push_front(int val){
        Node * newnode= new Node(val);  // dynamic


      ///  Node * newnode(val); static

      if(head==NULL){
        head=tail=newnode;
      }
      else{
        newnode->Next=head;
        head=newnode;

      }

    }

/// PUSHBACK

    void push_back(int val){
        Node*newnode= new Node(val);

        if(head==NULL){
            head=tail=NULL;

        }
        else{
            tail->Next=newnode;
            tail=newnode;

        }
    }


///// PRINTING LINK LIST

void printlist(){

    Node*temp=head;

    while (temp !=NULL)
    {
        cout << temp->data << "  ->  " ;
        temp=temp->Next;



    }
    cout << "NULL";
    
}

void insert (int val,int pos){

  Node*newnode = new Node (val);
  Node*temp=head;


  for(int i=0;i<pos-1;i++){
    temp=temp->Next;
} 

   newnode->Next=temp->Next;
   temp->Next=newnode;
   
} 
~List(){
    if(head!=NULL){
        delete head;
        head=NULL;
    }

}
void search(int s);{


    Node* temp=head;

     while (temp!=NULL)
    {
        if(temp->)
    }
    
}


};



int main(){
    

    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printlist();
    cout << endl;
    ll.insert(100,2);
    ll.printlist();

    return 0;
}