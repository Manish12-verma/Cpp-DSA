void explainSet(){

    set<int>st; //it stores everything in sorted order and unique things
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(4);

    //function of insert can be used also,that only increases efficiency


    auto it =st.find(3);
    auto it = st.find(6);

    st.erase(5);

    int cnt = st.count(1);

    auto it = st.find(3);


    //complexity logN for everything in the set. 
}