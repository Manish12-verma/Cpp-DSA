void explainStack(){
    stack<int>st;
    st.push(1);
    st.pop(2);
    st.emplace(5);

    cout << st.top(); //prints 5

    st.pop();
    st.size();
    st.empty();
    st1.swap(st2); // it simply swaps both the stacks
}