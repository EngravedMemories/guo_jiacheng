#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Matrix.h"
using namespace std;

istream &operator>>( istream &input , Matrix &matrix )
{
    for(size_t i=0, i<= r.size; ++i)
        input >> r.ptr[i];
    for(size_t i=0, i<= c.size; ++i)
        input >> c.ptr[i];
    return input;
}

ostream &operator<<( ostream &output , const Matrix &matrix )
{
      for(size_t i=0, i<= r.size; ++i)
        output << setw(10)<<r.ptr[i];
        for(size_t i=0, i<= c.size; ++i)
        output << setw(10)<<c.ptr[i];
            output << x.element[k++] << " ";
          output << endl;
      return output;
}

Matrix operator+( const Matrix &m, const Matrix &m )
{
    if (rows != m.row || col != m.col)
        throw SizeMismatch();
    Matrix w(row, col);
        for (int i = 0; i<row *col; i++)
        m.element[i] = element[i] + m.element[i];
      return m;
}

Matrix operator-( const Matrix &m, const Matrix &m )
{
     if (rows != m.row || col != m.col)
        throw SizeMismatch();
    Matrix w(row, col);
    for (int i = 0; i<row *col; i++)
        m.element[i] = element[i] - m.element[i];

      return m;
}

Matrix operator*( const Matrix &m, const Matrix &m )
{
    if (cols != m.row)
        throw SizeMismatch();
      Matrix w(row, m.col);

      int ct = 0, cm = 0, cw = 0;
      for (int i = 1; i <= row; i++)
      {
          for (int j = 1; j <= m.col; j++)
          { T sum = element[ct] *m.element[cm];
              for (int k = 2; k <= col; k++)
              {
                  ct++;
                  cm += m.col;
                  sum += element[ct] *m.element[cm];
              };
              m.element[cw++] = sum;
              ct -= col - 1;
              cm = j;
          }
          ct += col;
          cm = 0;
      }
      return m;
}

unsigned int Rows()const
{
    return row;
}

unsigned int Columns()const
{
    return col;
}

Matrix::Matrix( unsigned int r = 0, unsigned int c = 0)
{
    if (r<0 || c<0)
        throw invalid_argument("The size of Rows and Columns must be greater than 0");
    row = r;
    col = c;
}

Matrix::~Matrix()
{
    delete []element;
}
