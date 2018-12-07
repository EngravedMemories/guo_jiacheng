#ifndef _ACCOUNT_
#def _ACCOUNT_
using namespace std;

class Employee
{
public:
   Employee( string, string, int );
void setFirstName( string );
   string getFirstName();
   void setLastName( string );
   string getLastName();
   void setSalary( int );
   int getSalary();
private:
   string firstName;
   string lastName;
   int Salary;
}

Employee::Employee( string first, string last, int salary )
{
   setFirstName( first );
   setLastName( last );
   setMonthlySalary( salary );
}

void Employee::setFirstName( string name )
{
   firstName = name;
}
string Employee::getFirstName() const
{
   return firstName;
}
void Employee::setLastName( string name )
{
   lastName = name;
}
string Employee::getLastName()
{
   return lastName;
}
void Employee::setMonthlySalary( int salary )
{
   if ( salary > 0 )
      monthlySalary = salary;
   if ( salary <= 0 )
      monthlySalary = 0;
}
int Employee::getMonthlySalary()
{
   return monthlySalary;
}
#endif
