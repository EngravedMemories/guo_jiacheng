#include <iostream>

using namespace std;

int main()
{
    float a=0, b=0, c=0;
    cout <<"Enter hours worked (-1 to end):";
    cin >>a;
    while(a!=-1)
    {
        cout <<"Enter hourly rate of the employee ($00.00):";
        cin >>b;
        if(a<=40)
        c=a*b;
        else
            c=a*b+b/2;
        cout <<"Salary is $"<<c<<endl;
        cout <<"\nEnter hours worked(-1 to end):";
        cin >>a;
    }
    return 0;
}
