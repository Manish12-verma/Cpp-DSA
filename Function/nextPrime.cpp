#include<bits/stdc++.h>
using namespace std;
int nextPrime(int n){
    n++;
    while(true){
        int i;
        for(i = 2; i < n; i++){
            if(n % i == 0)
                break;
        }
        if(i == n)
            return n;
        n++;
    }
}
int main(){
    int n=10;
    cout << "Next Prime number is: "<< nextPrime(n);
    return 0;
}