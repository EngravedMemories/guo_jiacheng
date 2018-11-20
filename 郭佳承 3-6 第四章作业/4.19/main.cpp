#include <iostream>

using namespace std;

int main()
{
    double counter=0, n1=0, n2=0, n3=0, l1=0, l2=0, i=0;
        cout <<"Enter a number:";
        cin >>n1;
        cout <<"Enter the next number:";
        cin >>n2;
    if(n1>n2)
    {
        l1=n1;
        l2=n2;
    }
    else
    {
        l1=n2;
        l2=n1;
    }
    while(i<8)
{
        cout <<"Enter the next number:";
        cin >>n3;
    if(n3>l1)
    {
        l2=l1;
        l1=n3;
    }
    if(n3<l1&&n3>l2)
       l2=n3;
    i++;
}

    cout <<"The largest two numbers are "<< l1<<" and "<<l2<<endl;
    return 0;
}
