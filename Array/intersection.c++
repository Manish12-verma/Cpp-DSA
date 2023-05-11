#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int b[],int n,int m){
    unordered_set<int>s;

    //insert the element of arr1 to set
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        //if the element is present in the set then push it into the vector
        if(s.find(b[i]) != s.end()){
            //erase element from set because if same element is present again in the array we don't need to count it again.
            s.erase(b[i]);

            cout << b[i]<<" ";
        }
    }
}
int main(){
    int a[]={1,3,2,3,3,4,5,5,6};
    int b[]={3,3,5};

    int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(b[0]);

    //sort
    sort(a,a+n);
    sort(b,b+m);

    //function call
    intersection(a,b,n,m);
}