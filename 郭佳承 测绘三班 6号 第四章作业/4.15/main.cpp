#include <iostream>
using namespace std;

int main()
{
    float a=0, b=0, c=0;

    cout <<"Enter sales in dollars(-1 to end):";
    cin >>a;

    while(a!=-1)
{
    b=200+a*0.09;
    cout <<"Salary is:$"<<b<<endl;
    cout <<"Enter sales in dollars(-1 to end):";
    cin >>a;
}
return 0;
}
