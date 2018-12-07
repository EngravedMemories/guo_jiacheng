3.15
#ifndef _ACCOUNT_
#def _ACCOUNT_
using namespace std;
class Date
{
public:
   Date( int, int, int );
   void setMonth( int );
   int getMonth();
   void setDay( int )£»
   int getDay();
   void setYear( int );
   int getYear();
   void displayDate();
private:
   int month; int day; int year;
};

Date::Date( int m, int d, int y )
{
   setMonth( m );
   setDay( d );
   setYear( y );
}
void Date::setMonth( int m )
{
   month = m;
   if ( month < 1 )
      month = 1;
   if ( month > 12 )
      month = 1;
}
int Date::getMonth()
{
   return month;
}
void Date::setDay( int d )
{
   day = d;
}
int Date::getDay()
{
   return day;
}
void Date::setYear( int y )
{
   year = y;
}
int Date::getYear()
{
   return year;
}
void Date::displayDate()
{
   cout << month << '/' << day << '/' << year << endl;
}
#endif
