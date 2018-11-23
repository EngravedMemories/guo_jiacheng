#include <iostream>

using namespace std;

int main()
{
   int a=0, b=0, i=1, n=0;
    cout << "Enter a number to limit:";
    cin >>n;
    cout << "Enter a number:";
    cin >>a;
    for(;i<n; i++)
    {
        cout << "Enter a number:";
        cin >>b;
        if(b<a)
            a=b;
    }
    cout<<min(a, b)<<endl;
    return 0;
}
