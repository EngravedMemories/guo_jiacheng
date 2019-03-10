#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
  friend std::ostream &operator<<(std::ostream &, const PhoneNumber &);
  friend std::istream &operator<<(std::istream &, PhoneNumber &);
  private:
      std::string line1;
      std::string line2;
      std::string line3;
};

#endif // MATRIX_H
