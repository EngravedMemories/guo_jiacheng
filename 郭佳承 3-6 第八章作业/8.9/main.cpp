#include <iostream>

using namespace std;

int main()
{
    long int v1=200000, v2;
    long int *longPtr=&v1;
    cout <<longPtr<<endl;
    v2=*longPtr;
    cout <<v2<<endl;
    cout <<&v1<<endl;
    cout <<longPtr<<endl;
    return 0;
}
