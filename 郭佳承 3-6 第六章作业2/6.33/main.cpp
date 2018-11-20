#include <iostream>
#include <cstdlib>

using namespace std;

int flip()
{
    int sum1=0, sum2=0, c=0, i=0;
    while(i<100)
    {
        c=rand()%2;
    if(c==0)
        {
        cout <<"Tail"<<endl;
        sum1++;
        }
    else
        {
        cout <<"Head"<<endl;
        sum2++;
        }
    i++;
    }

    cout<<"Total tail:"<<sum1<<endl;
    cout<<"Total head:"<<sum2<<endl;
    return i;

}

int main()
{
    int a=0, b=0;
    flip();
    cout << "Hello world!" << endl;
    return 0;
}
