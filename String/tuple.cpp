#include<iostream>
#include<tuple>
using namespace std;

int main(){
    tuple<char,int,int> t1('m',24,53);
    tuple<char,int> t2('a',37);
    auto t3 = tuple_cat(t1,t2);
    cout <<get<0>(t3)<<" "<<get<2>(t3);
    return 0;

} 