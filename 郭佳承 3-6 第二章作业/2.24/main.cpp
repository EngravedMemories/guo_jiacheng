#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0;
    cout << "Enter the number:" << endl;
    cin >>a;

    b=a/2;
    if(b==0)
        cout <<"It's an odd number.";
    else
        cout <<"It's an even number.";
    return 0;
}
