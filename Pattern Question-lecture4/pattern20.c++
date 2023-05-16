#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int start = n - i + 1;
        while (j <= n)
        {
            if (j <= n - i + 1)
            {
                cout << j << " ";
            }
            else
            {
                cout << "*" <<" ";
            }
            j++;
        }
        int k = 1;
        while (k <= n)
        {
            if (k <= i - 1)
            {
                cout << "*"<<" ";
            }
            else
            {
                cout << start << " ";
                start--;
            }
            k++;
        }
        cout << endl;
        i++;
    }
}