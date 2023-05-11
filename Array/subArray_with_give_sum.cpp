#include<iostream>
using namespace std;

int subArraySum(int arr[],int n,int sum){
    //initialize currentSum as value of first element and starting point as 0
    int currentSum = arr[0],start =0,i;
    
    for(i=1; i<=n;i++){
        //if the currentSum exceeds the sum
        //then remove the starting elements
        while(currentSum >sum && start <i-1)
        {
            currentSum=currentSum - arr[start];
            start++;
        }
        //if currentSum becomes equal to the sum 
        // then return true 
        if(currentSum ==sum){
            cout << start <<" "<< i-1;
            return 1;
        }
        //add this element to the currentSum
        if(i<n)
          currentSum =currentSum +arr[i];
    }
    return 0;

}
int main(){
    int arr[] = {15,2,4,8,9,5,10,23};
    int n =sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr,n,sum);
    return 0;
}