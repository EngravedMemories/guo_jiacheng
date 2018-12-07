#include <iostream>

using namespace std;

int main()
{
    double a=0, b=0, sum=0, difference=0, pro=0, quo=0;
    cout <<"Enter the first number: ";
    cin >>a;
    cout <<"Enter the second number: ";
    cin >>b;

    sum=a+b;
    difference=a-b;
    pro=a*b;
    quo=a/b;

    cout << "Sum is " << sum << endl;
    cout << "Difference is " << difference << endl;
    cout << "Product is " << pro << endl;
    cout << "Quotient is " << quo << endl;
    return 0;
}
