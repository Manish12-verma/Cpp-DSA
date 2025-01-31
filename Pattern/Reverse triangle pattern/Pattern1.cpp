#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    for(int i=1;i<=n;i++){

        //space print krlo
        int spaces = n-i;
        for(int j=1;j<=spaces;j++){
             cout << " ";
        }

        //star print krlo

        for(int j=1;j<=i;j++){
            cout <<"*";

        }
        cout <<endl;
    }
    return 0;
    
}