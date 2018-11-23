#include <iostream>

using namespace std;

int main()
{
    unsigned int i=0, j=0, k=1;
    for(;i<=10;i++)
    {
        for(;j<=10-i;j++)
            cout <<endl;
        for(;k<=10*i;k++)
            cout <<"*";
    }


    return 0;
}
