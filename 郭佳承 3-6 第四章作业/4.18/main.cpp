#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i=1;
    cout <<"N"<<setw(8)<<"10*N"<<setw(8)<<"100*N"<<setw(8)<<"1000*N\n";
    while(i<=5)
    {
    cout <<i<<setw(8)<<10*i<<setw(8)<<100*i<<setw(8)<<1000*i<<endl;
    i++;
    }
    return 0;
}
