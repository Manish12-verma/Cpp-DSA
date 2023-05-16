#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num <<endl;

    //address of the operator-&
    cout << "address of the operator is- "<<&num <<endl;

    int *ptr =&num;

    cout <<"Address is -"<<ptr <<endl;
    cout <<"value is -"<<*ptr <<endl;

    double d =4.3;
    double *p2=&d;

    cout <<"Address is -"<<p2 <<endl;
    cout <<"value is -"<<*p2 <<endl;

    cout<<"size of integer is- "<<sizeof(num) <<endl;
    cout<<"size of pointer is- "<<sizeof(*ptr) <<endl;
    cout<<"size of pointer is- "<<sizeof(*p2) <<endl;


    //important concept 

    int i=3;
    int *t=&i;
    //cout<<(*t)++<<endl;
    *t=*t+1;
    cout << *t <<endl;
    cout <<"before t" <<t <<endl;
    t=t+1;
    cout <<"after t" <<t <<endl;

    return 0;
}