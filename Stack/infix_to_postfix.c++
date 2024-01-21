#include <bits/stdc++.h>
using namespace std;
int prec(char ch){

    if(ch == '^') return 3;

    if(ch == '*' || ch == '/') return 2;

    if(ch == '+' || ch == '-') return 1;

    return -1;

}

string infixToPostfix(string s){

    string ans = "";

    stack<char> st;




    for(int i = 0; i < s.size(); i++){

        // The current character

        char ch = s[i];




        // If operand then add it to the expression

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){

            ans += ch;

        }




        // If the current char is ( push into stack

        else if(ch == '('){

            st.push(ch);

        }




        // If we get a ) then pop until we get ) : discard both

        else if(ch == ')'){

            while(st.top() != '('){

                ans += st.top();

                st.pop();

            }

            st.pop();

        }




        // If we get a operator then remove all the higher precedence operators from stack

        else{

            while(!st.empty() && prec(ch) <= prec(st.top())){

                ans += st.top();

                st.pop();

            }

            st.push(ch);

        }

    }




    // After the exp is traversed just empty the stack

    while(!st.empty()){

        ans += st.top();

        st.pop();

    }

    return ans;

}

// Driver code
int main() {
	string s = "a+b*(c^d-e)^(f+g*h)-i";

	// Function call
	cout<<infixToPostfix(s)<<endl;

	return 0;
}
