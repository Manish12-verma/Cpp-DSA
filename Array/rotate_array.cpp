#include<iostream>
using namespace std;

void rotate(int arr[],int n){
    int x=arr[n-1],i;
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0] = x;
    

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,n);

    cout << "\n Rotated array is \n ";
    for(int i=0;i<n;i++){
        cout << arr[i] <<' ';

        
    }
    return 0;
}