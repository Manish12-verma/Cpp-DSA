#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int i=0;
        int j=0;
        while(i<m && j<n){
            num1[i++]=num2[j++];
        }
        else{
            num1[i++]=num1[i];
        }
}

    void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout <<ans[i]<<"  ";
    }
    cout <<endl;
}


int main(){
    int num1[3]={1,2,3,0,0,0};
    int num2[3]={2,5,6};

    merge(num1,3,num2,3);
    print(num1,6);

    return 0;


}
