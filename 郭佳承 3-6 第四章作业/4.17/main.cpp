#include <iostream>

using namespace std;

int main()
{
    double counter=0, number=0, largest=0;
        cout <<"Enter a number:";
        cin >>largest;

    while(counter<9)
    {
        cout <<"Enter the next number:";
        cin >>number;
    if(largest>number)
        largest=largest;
    else
        largest=number;

    counter++;
    }
    cout <<"The largest number is "<< largest <<endl;
    return 0;
}
