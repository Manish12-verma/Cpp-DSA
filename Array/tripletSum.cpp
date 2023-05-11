#include<bits/stdc++.h>
using namespace std;

bool find3numbers(int arr[],int n,int sum){
     //fix the first element as arr[i]
     for(int i=0;i<n-2;i++){
     
      //fix the second element as arr[j]
      for(int j=i+1;j<n-1;j++){
        //now look for the third number
        for(int k=j+1; k<n;k++){
            if(arr[i]+arr[j]+arr[k]==sum){
                cout<< "Triplet is "<<"{"<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"}";
                return true;
            }
        }
      }
     }
     return false;
}
//driver code
int main(){
    int arr[]={5,6,3,10,7};
    int sum=16;
    int n=sizeof(arr)/sizeof(arr[0]);

    find3numbers(arr,n,sum);
    return 0;

}