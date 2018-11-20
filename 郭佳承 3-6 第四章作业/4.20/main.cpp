#include <iostream>

using namespace std;

int main()
{
    unsigned int passes=0, failures=0, studentCounter=1;
    int result=0;
    while(studentCounter<=10)
    {
        cout<<"Enter result (1=pass, 2=fail): ";
        cin >>result;

        if(result==1)
            passes++;
        if(result==2)
            failures++;
        studentCounter++;
        while(result!=1&&result!=2)
        {
            cout<<"Sorry. Enter result (1=pass, 2=fail): ";
            cin>>result;
        }
    }
    cout <<"Passed "<<passes<<"\nFailured "<<failures<<endl;

    if(passes>8)
        cout <<"Bonus to instructor!"<<endl;
    return 0;
}
