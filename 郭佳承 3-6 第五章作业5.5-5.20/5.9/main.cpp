#include <iostream>

using namespace std;

int main()
{
    unsigned int c=1;
    for(unsigned int a=1; a<=15; a+=2)
        c=c*a;
    cout <<c;
    return 0;
}
