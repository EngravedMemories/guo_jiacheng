#include <iostream>
#include <cmath>

using namespace std;

double hypotenuse(double a, double b, double c)
{
    c=a*a+b*b;
    c=sqrt(c);
    cout <<"The length needed is: "<<c<<endl;
    return c;
}

int main()
{
    int a=0, b=0;
    cout <<"Enter two length numbers: ";
    cin >>a>>b>>endl;
    hypotenuse(a, b);
    return 0;
}
