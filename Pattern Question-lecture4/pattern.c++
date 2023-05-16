#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number of rows you want : -";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int start_val = n- i+1;
        while (j <= n)
        {
            if (j <= n - i + 1)
            {
                cout <<j<<" ";
               
            }
            else{
                cout<<"* ";
            }
             j = j + 1;
        }
        int k = 1;
        while(k<=n){
            if(k<=i-1){
                cout<<"* ";
            }
            else{
                cout<<start_val<<" ";
                start_val = start_val-1;
            }
            k = k+1;

        }
        cout<<endl;
        i = i+1;
    }
}