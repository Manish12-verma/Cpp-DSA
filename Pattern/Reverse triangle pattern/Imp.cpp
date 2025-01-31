#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int start = 1;
     
        for(int j=1;j <= n - i + 1;j++)
        {
            cout << start;
            start++;
         
        }
        // for stars
        int star1 = i - 1;
        for (int j = 1;j<=star1;j++)
        {
            cout << "*";
         
        }

        int star2 = i - 1;
        for (int j = 1;j<=star2;j++)
        {
            cout << "*";
        
        }

        int decreasing = n - i + 1;
        for (int j = 1; j <= n - i + 1; j++) {
            cout << decreasing;
            decreasing--;
        }

        cout << endl;
       
    }
    return 0;
}