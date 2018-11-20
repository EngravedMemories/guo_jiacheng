#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

float calculateCharges(int car=1, int hours=0, int charges=0)
{

        if(hours<=3)
            charges=2.00;
        else
        {
            charges=2.00+(hours-3)*0.50;
            if(charges>10.00)
                charges=10.00;
        }
        car++;
}


int main()
{
    int car=1, hours1=0, hours2=0, hours3=0,charges1=0, charges2=0, charges3=0;
     while(car<=3)
    {
    cout <<"Please enter parking hours between 0 and 24:";
    cin >> hours;
    }
    int calculateCharges();
    cout <<"Car"<<setw(10)<<"Hours"<<setw(10)<<"Charges"<<endl
         <<"  1"<<setw(10)<<hours1<<setw(10)<<charges1<<endl
         <<"  2"<<setw(10)<<hours2<<setw(10)<<charges2<<endl
         <<"  3"<<setw(10)<<hours3<<setw(10)<<charges3<<endl
         <<"Total"<<setw(8)<<hours1+hours2+hours3<<setw(10)<<charges1+charges2+charges3<<endl;
    return 0;
}
