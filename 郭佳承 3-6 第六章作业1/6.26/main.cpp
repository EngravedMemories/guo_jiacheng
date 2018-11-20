#include <iostream>
#include <iomanip>

using namespace std;

int celsius(int *c, int *f)
{
    *c=5/9*(*f-32);
    return *c;
}

int fahrenheit(int *c, int *f)
{
    *f=*c*9/5+32;
    return *f;
}

int main()
{
    int c1=0, c2=0, f1=0, f2=0;
    cout<<"¨H"<<setw(8)<<"¡æ"<<endl;
    for(int i=0;i<=100;i++)
    {
        celsius(c1, f1);
        cout<<i<<setw(8)<<c1<<endl;
    };

    cout<<"¡æ"<<setw(8)<<"¨H"<<endl;
    for(int j=32;j<=212;j++)
    {
        celsius(c2, f2);
        cout<<j<<setw(8)<<c2<<endl;
    };


}
