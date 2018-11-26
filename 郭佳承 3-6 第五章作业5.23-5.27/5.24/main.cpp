#include <iostream>

using namespace std;

int main()
{
   int size=0;
   do
   {
      cout<<"Enter an odd number for the diamond size (1-19): \n";
      cin>>size;
   } while ((size<1)||(size>19)||((size%2)!=1));

   for (int r=1; r<=size-2; r+=2)
   {
      for (int space=(size-r)/2; space>0; space--)
         cout <<" ";
      for (int a=1; a<= r; a++ )
         cout <<"*";

      cout << endl;
   }

   for (int r=size; r>=0; r-=2)
   {
      for (int space=(size-r)/2; space>0; space--)
         cout <<" ";

      for (int a=1; a<=r; a++)
         cout << "*";

      cout <<endl;
   }
   cout << endl;
   return 0;
}
