#include<iostream>
#include<bits/stdc++.h>
using namespace std;
stockBuySell(int price[],int n){

    if( n==1 )
       return 1;
    int i=0;
    while(i<n-1){

        while((i <n-1) && (price[i+1] <= price[i]))
         i++;

        if(i==n-1)
          break;
        int buy =i++;

        while((i<n) && (price[i] >= price[i-1]))
            i++;

        int sell = i-1;

        cout << "buy on day " << buy
             <<"\n sell on day "<<sell << endl;       
    }   

}

int main(){
    int price[]={100,180,260,310,40,535,695};
    int n=sizeof(price)/sizeof(price[0]);

    stockBuySell(price,n);

    return 0;


}