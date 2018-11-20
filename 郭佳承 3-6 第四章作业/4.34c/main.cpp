#include <iostream>
using namespace std;

int main()
{
   int number=1, accuracy=0, factorial=1, x=0;
   double e=1;
   double exponent=1;

   cout <<"Enter exponent: ";
   cin>>x;

   cout<<"Enter desired accuracy of e: ";
   cin accuracy;
   while ( number < accuracy )
   {
      exponent*=x;
      factorial*=number;
      e+=exponent/factorial;
      number++;
   }

   cout<<"e to the "<<x<<"is"<<e<<endl;
}
