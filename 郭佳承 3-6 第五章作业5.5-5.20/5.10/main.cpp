#include <iostream>

using namespace std;

int main()
{
    int a=1;
    for(int i=1; i<=5; i++)
    {
        a=a*i;
        cout << setw(12)<<a<<endl;
    }
    return 0;
}
