#include <iostream>

using namespace std;

int min(int *a, int *b, int *c)
{
    int d=0;
    if(*a<=*b&&*a<=*c)
        d=*a;
    else if(*b<=*a&&*b<=*c)
        d=*b;
    else
        d=*c;
    return d;
}

int main()
{
    int a=0, b=0, c=0;
    cout << "Enter three numbers:" << endl;
    cin>>a>>b>>c;
    cout<<"The smallest number is:"<<min(a, b, c)<<endl;
    return 0;
}
