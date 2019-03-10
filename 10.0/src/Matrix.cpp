#include "Matrix.h"
using namespace std;

ostream &operator<<(ostream &output, const PhoneNumber &number)
{
    output << matrix.line1 <<"\n" << matrix.line2 <<"\n"<< matrix.line3 <<"\n";
    return output;
}

istream &operator>>(istream &input, PhoneNumber &number)
{
    input >> setw(3) >> matrix.line1;
    input >> setw(3) >> matrix.line2;
    input >> setw(3) >> matrix.line3;
    return input;
}
