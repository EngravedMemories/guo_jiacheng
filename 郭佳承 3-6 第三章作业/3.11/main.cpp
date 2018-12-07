#include<iostream>
#include<string>
#include ¡°GradeBook.h¡±
using namespace std;
int main()
{
   GradeBook gradeBook(
      " C++ Programming", "Professor Smith" );
      cout << "gradeBook instructor name is: "
      << gradeBook.getInstructorName() << "\n\n";
      gradeBook.setInstructorName( "Assistant Professor Bates" );
      cout << "new gradeBook instructor name is: "
      << gradeBook.getInstructorName() << "\n\n";
      gradeBook.displayMessage();
   return 0;
}
