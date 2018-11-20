#include <iostream>

using namespace std;

int iseven(int a, int b)
{
    b=a%2;
    return b;
}

int main()
{
    int a=0, b=0;
    while(a!=-1)
    {
    cout << "Enter a number: " << endl;
    cin>>a;
        b=iseven(a);
    if(b==0)
        cout<<"True";
    else
        cout<<"False";

    }

    return 0;
}
