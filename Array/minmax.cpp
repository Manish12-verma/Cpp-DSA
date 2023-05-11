#include<iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[],int n)
{
    struct Pair minmax;
    int i;

    if(n%2 ==0){
        if(arr[0]>arr[1]){
            minmax.max=arr[0];
            minmax.min=arr[1];
        }
        else{
             minmax.min=arr[0];
             minmax.max=arr[1];
        }
        //set the starting index of the loop
        i=2;
    }
    //if the array has odd number of elements the initialise the first element as minimum and maximum
    else
    {
             minmax.min=arr[0];
             minmax.max=arr[0];

             //starting index of the loop
             i=1;
    }
    //in the while loop,pick the elements in
    //pair and compare the pair with max
    //and min so far
    while(i<n-1){
        if(arr[i]<arr[i+1]){
            if(arr[i]>minmax.max){
            minmax.max =arr[i];
            }
            if(arr[i+1]<minmax.min){
                minmax.min=arr[i+1];
            }
            else
            {
              
            if (arr[i + 1] > minmax.max)    
                minmax.max = arr[i + 1];
                 
            if (arr[i] < minmax.min)        
                minmax.min = arr[i]; 
            }
            i=i+2;
        }
    }
    return minmax;
}
int main(){
    int arr[]={100,50,10,20,0,3};
    int n=6;

    Pair minmax =getMinMax(arr,n);

   int sum=minmax.min + minmax.max;
   cout<<"Sum is "<<sum;

    return sum;
}

  