#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(3);

    s.pop();
    

    cout <<"Printing top element " << s.top() << endl;
    if(s.empty()){
        cout <<"Stack is Empty " <<endl;
    }
    else{
        cout <<"Stack is not Empty" << endl;
    }
    return 0;
}