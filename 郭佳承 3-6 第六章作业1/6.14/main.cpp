#include <iostream>
#include <cmath>

using namespace std;

float roundToIntegers(float *number, float *y)
{
    *y=floor(*number+0.5);
    return *y;
}

float roundToTenth(float *number, float *y)
{
    *y=floor(*number * 10+0.5)/10;
    return *y;
}

float roundToHundreds(float *number, float *y)
{
    *y=floor(*number * 100+0.5)/100;
    return *y;
}

float roundToThousands(float *number, float *y)
{
    *y=floor(*number * 1000+0.5)/1000;
    return *y;
}

int main()
{
    float x=0, a=0, b=0, c=0, d=0;
    cout <<"Please enter a number:";
    cin >>x;
    roundToIntegers(x, a);
    cout <<"The original number is:"<<x<<"Round to tenth:"<<a<<endl;
    roundToTenth(x, b);
    cout <<"The original number is:"<<x<<"Round to tenth:"<<b<<endl;
    roundToHundreds(x, c);
    cout <<"The original number is:"<<x<<"Round to tenth:"<<c<<endl;
    roundToThousands(x, d);
    cout <<"The original number is:"<<x<<"Round to tenth:"<<d<<endl;

    return 0;
}
