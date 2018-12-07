#include <iostream>
#include <string>
using namespace std;
#include "Date.h"
int main()
{
   Date date( 1, 1, 1970 );
   cout << "Month: " << date.getMonth() << endl;
   cout << "Day: " << date.getDay() << endl;
   cout << "Year: " << date.getYear() << endl;
   cout << "\nOriginal date:" << endl;
   date.displayDate();
   date.setMonth( 13 );
   date.setDay( 1 );
   date.setYear( 2018 );
   cout << "\nNew date:" << endl;
   date.displayDate();
   return 0;
}
