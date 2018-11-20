#include <iostream>

using namespace std;

int main()
{
    int i, j, k=0, num=0;
    for(i=0; i<=10000;i++)
    {
        for(j=2; j<=i; j++)
            if(i%j==0)
        {
            break;
        }
            if(i==j)
            {
                k++;
                num++;
                cout<<i<<" ";
            }
            if(k==10)
            {
                k=0;
                cout<<endl;
            }
    }
    cout << "\n10000内素数的总个数："<<num<< endl;
    return 0;
}
