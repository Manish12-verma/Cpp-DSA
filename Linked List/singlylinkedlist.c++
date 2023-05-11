#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this-> data = data;
        this ->next = NULL;
    }
};

// insert at beginning
void insertAtHead(Node* &head,int d){
    //create a new node
    Node* temp = new Node(d);
    temp -> next =head;
    head = temp;

}
//insert at end 
insertAtTail(Node* &tail,int d){
       Node* temp = new Node(d);
       tail -> next = temp;

}
void print (Node* &head){
     Node *temp=head;
     while(temp!=NULL){
        cout<< temp-> data<< endl;
        temp =temp->next;
     }
     cout <<endl;
}
//insert at any postion 
void insertAtPosition(Node* &head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return; 
    }
    Node* temp = head;
    int cnt =1;
    while(cnt  < position-1){
        temp = temp->next;
        cnt++;
    }
   // creating a node for d
   Node* nodeToInsert = new Node(d);
   nodeToInsert -> next =temp ->next;
   temp -> next = nodeToInsert;
}

int main()
{
    //created a new node
Node* node1 = new Node(10);
// cout << node1 -> data << endl; 
//  cout << node1 -> next << endl;

//head printed to node1
Node* head = node1;
Node* tail =node1;

print(head);

insertAtTail(tail,12);
print(head);
insertAtTail(tail,15);
print(head);

insertAtPosition(head,2,23);
print(head);


return 0;
}