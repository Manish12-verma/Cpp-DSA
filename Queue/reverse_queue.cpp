#include <bits/stdc++.h> 
void reverse(queue < int > & q) {
    // Write your code here.
    stack<int> s;
        while(!q.empty()){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        while(!s.empty()){
            int element =s.top();
            s.pop();
            q.push(element);
        }
        return q;
}
