voidExplain(){
    priority_queue<int>pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top(); //prints 10
    pq.pop();

    cout << pq.top(); //prints 8
    

}