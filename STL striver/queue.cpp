voidExplain(){
    queue<int>q;
    q.push(1);
    q.emplace(4);
    q.back() +=5;

    cout << q.back(); //prints 9
    cout << q.front();
    q.pop();

    cout << q.front(); //print 2
}