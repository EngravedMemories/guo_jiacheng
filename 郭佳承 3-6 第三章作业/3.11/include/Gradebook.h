#ifndef _ACCOUNT_
#def _ACCOUNT_
using namespace std;

class GradeBook
{
public:
   GradeBook( string, string );
   void setCourseName( string );
   string getCourseName();
   void setInstructorName( string );
   string getInstructorName();
   void displayMessage() const

private:
string courseName;
   string instructorName;
};

GradeBook::GradeBook( string course, string instructor )
{
   setCourseName( course );
setInstructorName( instructor );
}

void GradeBook::setCourseName( string name )
{
   courseName = name;
}
 string GradeBook::getCourseName()
      const
{
   return courseName;
}
void GradeBook::setInstructorName( string name )
{
   instructorName = name;
}

string GradeBook::getInstructorName() const
{
   return instructorName;
}

void GradeBook::displayMessage()
{
   cout << "Welcome to the grade book for\n" << getCourseName() << "!"  << endl;
   cout << "This course is presented by: " << getInstructorName() << endl;
}
#endif
