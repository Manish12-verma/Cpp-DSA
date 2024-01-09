void explainExtra(){
    sort(a,a+n);
    sort(v.begin(),v.end()); // in vectors

    sort(a+2,a+4); // it sorts the some parts
    sort(a,a+n,greater<int>); // it sorts the array in descending order


}