#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, c=0, d=0, e=0;
    cout << "Enter a number between 10000 and 99999:" << endl;
    cin >>a;//12321
    if(a>10000&&a<99999)
    {
        b=a/10000;//b=1
        cout<<b<<endl;
        c=a%10;//c=1
        cout<<c<<endl;
        if(b==c)
        {
            d=(a%10000-a%1000)/1000;
            cout<<d<<endl;
            e=(a%100-c)/10;
            cout<<e<<endl;
            if(d==e)
                cout <<"Bingo!";
            else
                cout <<"Not required.";
        }
        else
            cout <<"Not required.";
    }
    else
        cout <<"Unacceptable. Please restart.";
    return 0;
}
