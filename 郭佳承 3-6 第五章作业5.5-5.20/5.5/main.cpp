#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, i=1, n=0;
    cout << "Enter a number to limit:";
    cin >>n;
    for(;i<=n; i++)
    {
        cout << "Enter a number:";
        cin >>a;
        b=b+a;
    }
    cout<<b<<endl;
    return 0;
}
