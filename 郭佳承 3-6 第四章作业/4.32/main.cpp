#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, c=0;
    cout <<"Enter three length numbers:";
    cin >>a>>b>>c;
    while(a>0)
    {
        if(a+b>c&&a+c>b&&b+c>a)
        cout <<"You can make a triangle.";
        else
        cout <<"Failed. Try again.\nEnter three length numbers:";
        cin >>a>>b>>c;
    }
    return 0;
}
