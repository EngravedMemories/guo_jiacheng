#include <iostream>

using namespace std;

int main()
{
    for (int r=1; r<=5; r++)
   {
      for (int space=1; space<=5-row; space++)
         cout <<" ";
      for (int a=1; a<=2*row-1; a++ )
         cout <<"*";

      cout <<endl;
   }
   for (int r=4; r>=1; r--)
   {
      for (int space=1; space<=5-row; space++)
         cout <<endl;
      for (int a=1; a<=2*row-1; a++)
         cout <<"*";
      cout <<endl;
   }

   cout <<endl;
}
    return 0;
}
