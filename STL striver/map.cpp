void explainMap(){
    map<int,int>mpp;  // key and value pairs 
    map<int,pair<int,int>>mpp; //in mapping everything will be stored in sorted order 
    map<int,int>,int>mpp;

    mpp[1]=2;
    mpp.emplace({3,1});

    mpp.insert({2,4});

    mpp.insert({2,3}) = 10;

    {
        {1,2};
        {2,4};
        {3,1};

    }
    for(auto it :mpp){
        cout <<it.first <<" "<<it.second <<endl;
    }

    cout << mpp[1];
    cout << mpp[5]; 
  //map always stores unique keys 

  auto it = mpp.find(3);
  cout << *(it).second;

  auto it = mpp.find(5); // if 5 is not present in the map then it will 
  //point to the lement after the map

}