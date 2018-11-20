#include <iostream>
using namespace std;

void square(int side, char fillCharacter)
{
   for (int row=1; row<=side; row++)
   {
      for (int col=1; col<=side; col++)
         cout <<fillCharacter;
      cout <<endl;
   }
}

int main()
{
   int side=0;
   char character=0;

   cout << "Enter a character and the side length: ";
   cin >>character>>side;
   cout <<endl;

   square(side,character);
   cout <<endl;
}
