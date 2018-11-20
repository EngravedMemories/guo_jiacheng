#include <iostream>
using namespace std;

int main()
{
   int number = 1, accuracy=0, factorial=1;
   double e=1;

   cout << "Enter desired accuracy of e: ";
   cin >> accuracy;

   while (number<accuracy)
   {
      factorial*=number;
      e+=1.0/factorial;
      number++;
   }

   cout << "e is:"<<e<<endl;
}
