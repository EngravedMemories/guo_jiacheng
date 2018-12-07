#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, c=0, sum=0, ave=0, pro=0;
    cout <<"Input three different integers: ";
    cin >>a>>b>>c;

    sum=a+b+c;
    ave=sum/3;
    pro=a*b*c;

    cout <<"Sum is "<<sum<<endl;
    cout <<"Average is "<<ave<<endl;
    cout <<"Product is "<<pro<<endl;
    cout <<"Smallest is "<<min(min(a, b), c)<<endl;
    cout <<"Largest is "<<max(max(a, b), c)<<endl;
}
