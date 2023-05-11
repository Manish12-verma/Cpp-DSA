#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* pre;
    Node* next;
    //constructor
    Node(int d){
        this-> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

}
int main(){

    return 0;
}