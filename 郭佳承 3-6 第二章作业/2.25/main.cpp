#include <iostream>

using namespace std;

int main()
{
   int a=0, b=0, c=0;
   cout <<"Enter two numbers: ";
   cin >>a>>b;

   c=a%b;
   if(c==0)
   cout <<a<<" is the multiple of "<<b<<endl;
   else
    cout <<a<<" is not the multiple of "<<b<<endl;
   return 0;
}
