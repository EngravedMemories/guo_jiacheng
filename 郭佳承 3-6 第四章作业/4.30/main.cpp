#include <iostream>

using namespace std;

int main()
{
    double c=0, d=0, a=0, s=0;
    cout <<"Please enter a length number: ";
    cin >>a;
    while(a!=-1)
    {
        d=2*a;
    c=3.14159*2*a;
    s=3.14159*a*a;
    cout<<"直径为："<<d<<endl;
    cout<<"周长为："<<c<<endl;
    cout<<"面积为："<<s<<endl;

    cout <<"\nPlease enter a length number: ";
    cin >>a;
    }

    return 0;
}
