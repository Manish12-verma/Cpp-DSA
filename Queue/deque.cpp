#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int size;
    int front=-1;
    int rear=-1;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size=n;
        arr= new int[n];
        front =-1;
        rear=-1;
         
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // check full or not
        if((front==0 &&rear==size-1) || (front!=0&&rear==(front-1)%(size-1))){
            return false;
        }
        else if(front==-1){
        front =rear=0;
        }
        else if(front ==0 && rear!=size-1){
            front =size-1;
        }else{
            front--;
        }
        arr[front]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if((front==0 &&rear==size-1) || (front!=0&&rear==(front-1)%(size-1))){
            return false;
        }
        else if(front==-1){
        front =rear=0;
        }
        else if(front !=0&& rear==size-1){
           rear =0;
        }else{
            rear++;
        }
        arr[rear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
         if(front ==-1){
           // cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){//single element
          front = rear =-1;
        }else if(front ==size-1){
            front =0;  // to maintain cycle nature 
        }
        else{
            front++;

        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
         if(front ==-1){
           // cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){//single element
          front = rear =-1;
        }else if(rear ==0){
           rear=size-1;  // to maintain cycle nature 
        }
        else{
            rear--;

        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
       if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
      if(front==-1){
          return true;

      }
      else{
          return false;
      }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front==0 &&rear==size-1) || (front!=0&&rear==(front-1)%(size-1))){
            return true;
        }
        else{
            return false;
        }
    }
};