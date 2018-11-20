#include <iostream>

using namespace std;

double multiple(double a, double b)
{
   double c=1;
   c=a%b;
   if(c=0)
    cout <<"True";
   else
    cout <<"False";
   return c;
}

int main()
{
    int a=0, b=0;
    cout <<"Enter the big number:";
    cin>>a;
    cout <<"Enter the small number:";
    cin >>b;
    multiple(a, b);
    cout << "Hello world!" << endl;
    return 0;
}
