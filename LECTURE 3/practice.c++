#include <iostream>
using namespace std;
//----- Question 1

// int main(){
// int a=9;
// if (a==9)
// {
// cout<<"NINE"<<endl;
// }
// if(a>0)
// {
//     cout<<"POSITIVE"<<endl;

// }
// else{
//     cout<<"NEGATIVE"<<endl;
// }
// }

//  ----Question 2

// int main(){
//     int a= 2;
//     int b=a+1;
//     if ((a=3)==b)
//     {
//         cout<<a<<endl;
//     }
//     else{
//         cout<<a+1;
//     }
// }

int main()
{
    char ch;
    cout << "Enter any  character" << endl;
    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout << "this is an uppercase" << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "this is an lowercase" << endl;
    }
    else if (ch >= 48 && ch <= 57)
        {
            cout << "this is an number" << endl;
        }
}
