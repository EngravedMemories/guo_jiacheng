#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
   Employee employee1( "A", "B", 4500 );
   Employee employee2( "C", "D", 4000 );
   cout << "Employees' yearly salaries: " << endl;
   int salary1 = employee1.getsalary();
   cout << employee1.getFirstName() << " " << employee1.getLastName()
      << ": $" << salary1 * 12 << endl;

   int salary2 = employee2.getsalary();
   cout << employee2.getFirstName() << " " << employee2.getLastName()
      << ": $" << salary2 * 12 << endl;
   employee1.setsalary( salary1 * 1.1 );
   employee2.setsalary( salary2 * 1.1 );

   cout << "\nEmployees' yearly salaries after 10% raise: " << endl;

   salary1 = employee1.getsalary();
   cout << employee1.getFirstName() << " " << employee1.getLastName()
      << ": $" << salary1 * 12 << endl;
     salary2 = employee2.getMonthlySalary();
   cout << employee2.getFirstName() << " " << employee2.getLastName()
      << ": $" << salary2 * 12 << endl;
   return 0;
}
