#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    queue<int>second;
    int size=q.size();
    //first dividing the queue into 2 half
    for(int i=0;i<size/2;i++){
        int temp=q.front();
        q.pop();
        second.push(temp);
    }
    //now after forming two queue its time to merge them
    for(int i=0;i<size/2;i++){
        int element=second.front();
        second.pop();
        q.push(element);
        element=q.front();
        q.pop();
        q.push(element);
    }
}
