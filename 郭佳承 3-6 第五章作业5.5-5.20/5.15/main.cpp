#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
    explicit GradeBook(string);
    void setCourseName(string);
    string getCourseName const;
    void displayMessage() const;
    void inputGrades();
    void displayGradeReport() const;
private:
    string courseName;
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int fCount;
};

GradeBook::GradeBook(string name)
    aCount(0),
     bCount(0),
     cCount(0),
     dCount(0),
     fCount(0)
     {
         setCourseName(name);
     }

     void GradeBook::setCourseName(string name)
     {
         if(name.size()<=25)
            courseName=name;
         else
         {
             courseName=name.substr( 0, 25 );
             cerr <<"Name \" "<<name<<"\"exeeds maximum length(25).\n"
             <<"Limiting courseName to first 25 characters.\n"<<endl;
         }
     }

     string GradeBook::getCourseName() const
     {
         return courseName;
     }

     void GradeBook::displayMessage() const
     {
         cout <<"Welcome to the GradeBook for" <<getCourseName() <<"!\n"<<endl;
     }

     void GradeBook::inputGrades()
     {
         int grade;
         cout <<"Enter the letter grades."<<endl<<"Enter the EOF character to end input."<<endl;
     }
int main()
{
    GradeBook myGradeBook( "CS101 C++ Programming" );

   myGradeBook.displayMessage();
   myGradeBook.inputGrades();
   myGradeBook.displayGradeReport();
}
