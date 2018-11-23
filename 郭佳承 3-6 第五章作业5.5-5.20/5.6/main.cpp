#include <iostream>

using namespace std;

int main()
{
    double a=0, sum=0,ave=0, i=1, n=0;
    cout << "Enter a number to limit:";
    cin >>n;
    for(;i<=n; i++)
    {
        cout << "Enter a number:";
        cin >>a;
        sum=sum+a;
    }
    ave=sum/n;
    cout<<ave<<endl;
    return 0;
}
