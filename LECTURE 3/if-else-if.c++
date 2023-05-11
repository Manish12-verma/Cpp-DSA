#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of A " << endl;
    cin >> a;

//if-else
    if (a > 0)
    {
        
        cout << "A is positive" << endl;
    }
    else if (a < 0)
    {
        cout << "A is negative" << endl;
    }
    // here else is used as a default condition
    else
    {
        cout << " A is zero" << endl;
    }
}