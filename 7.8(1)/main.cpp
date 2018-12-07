#include <iostream>
#include <cstddef>
#include <array>

using namespace std;

int main()
{
    const size_t arraySize1=6;
    array<int, arraySize1> alphabet ={10, 20, 30, 40, 50, 60};
    cout<<"a) the sixth number is: "<<alphabet[6]<<endl;

    const size_t arraySize2=4;
    array<double, arraySize2> grade ={};
    cin>>grade[4];
    cout<<"b) The fourth grade is: "<<grade[4]<<endl;

    const size_t arraySize3=5;
    array<int, arraySize3> values ={8, 8, 8, 8, 8};
    cout<<"c)"<<values[1]<<values[2]<<values[3]<<values[4]<<values[5]<<endl;

    const size_t arraySize4=100;
    array<int, arraySize4> temperature ={};
    int sum=0;
    for(size_t i=1; i<=temperature.size(); i++)
        ++temperature;
    for(size_t j=1; j<=temperature.size(); j++)
        sum+=a[i];
    cout<<"d) Total temperature is: "<<sum<<endl;

    array<double, 11>a={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    array<double, 34>b={};
    for(size_t i=0; i<11; ++i)
    {
        b[i]=a[i];
        cout<<b[i]" ";
    }

}
