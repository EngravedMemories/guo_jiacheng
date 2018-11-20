#include <iostream>

using namespace std;

double tripleByValue( double count)
{
    cout <<"Triple by value "<<count<<" is ";
    return count*count*count;
}

void tripleByReference( double &countRef)
{
    countRef = countRef*countRef*countRef;
}

int main()
{
    int x=2, y=4;
    cout <<"x = "<<x<<"before tripled by value\n";
    cout <<"Value tripled by value:" <<tripleByValue( x )<<endl;
    cout <<"x = "<<x<<"after tripled by value\n";

    cout <<"y = "<<y<<"before tripled by reference\n";
    cout <<"Value tripled by reference:"<<tripleByReference( y )<<endl;
    cout <<"y = "<<y<<"after tripled by reference\n";
    return 0;
}
