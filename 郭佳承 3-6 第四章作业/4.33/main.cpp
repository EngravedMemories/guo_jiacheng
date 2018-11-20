#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a=0, b=0, c=0, d=0, e=0, f=0;
    cout <<"Enter three length numbers:";
    cin >>a>>b>>c;
    d=pow(a, 2);
    e=pow(b, 2);
    f=pow(c, 2);
    while(a>0)
    {
        if(d+e==f||d+f==e||e+f==d)
        cout <<"You can make a triangle.";
        else
        cout <<"Failed. Try again.\nEnter three length numbers:";
        cin >>a>>b>>c;
    }
    return 0;
}
