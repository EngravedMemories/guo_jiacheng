#include <iostream>

using namespace std;

double CircleArea(double a, double b)
{

        b=3.14159*a;
    return b;
}

int main()
{
    double a=0, b=0, c=0;
    cout<<"Enter a length number:";
    cin >>a;

    while(a!=-1)
    {
    c=CircleArea(a, b);
    cout <<"该圆的面积为："<<c<<endl;

    cout<<"\nEnter a length number:";
    cin >>a;
    }

    return 0;
}
