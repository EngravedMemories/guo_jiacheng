#include <iostream>
#include <string>

using namespace std;

int main()
{
    float a=0, b=0, c=0, d=0, e=0, f=0;
    cout <<"Enter account number(or -1 to quit):";
    cin >>a;
    while (a!=-1)
{
    cout <<"Enter the beginning balance:";
    cin >>b;
    cout <<"Enter total charges:";
    cin >>c;
    cout <<"Enter total credits:";
    cin >>d;
    cout <<"Enter credit limit:";
    cin >>e;

    f=b+c-d;

    if(f>e)
    {
        cout <<"New balance is:"<< f<<endl;
        cout <<"Account:"<<a<<endl;
        cout <<"Credit limit:" << e<<endl;
        cout <<"Balance:"<<f<<endl;
        cout <<"Credit limit Exceeded.\n\nEnter amount number (or -1 to exit):";
        cin >>a;
    }

    else
        cout <<"New balance is"<<a+f<<"\n\nEnter amount number (or -1 to exit):"<<endl;

        cin >>a;
}
    return 0;
}
