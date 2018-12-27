#include <iostream>
#include "DateAndTime.h"
using namespace std;
int main()
{
   constint MAXTICKS=30;
   DateAndTime d(12,31,2004,23,59,57 );
   for (int ticks=1; ticks <=MAXTICKS; ticks++ )
   {
      cout << "Universal time: ";
      d.printUniversal();
      cout << "Standard  time: ";
      d.printStandard();
      d.tick();
   }
   cout << endl;
   return 0;
}
