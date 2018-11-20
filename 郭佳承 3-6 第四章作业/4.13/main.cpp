#include <iostream>

using namespace std;

int main()
{
    long double a=0, b=0, c=0, d=0, e=0, f=0;
    cout << "Enter miles driven (-1 to quit):";
    cin >> a;
    while(a!=-1)
    {
        cout << "Enter gallons used:" ;
        cin >> b;
        c=a/b;
        cout << "MPG this trip:"<<c<<endl;
        d+=a;
        e+=b;
        cout << "Total MPG:"<<d/e<<endl;

        cout << "\nEnter miles driven (-1 to quit):" ;
        cin >> a;
    }

    return 0;
}
