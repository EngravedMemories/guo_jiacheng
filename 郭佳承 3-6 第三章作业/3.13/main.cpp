#ifndef _ACCOUNT_
#def _ACCOUNT_
using namespace std;

class Invoice
{
public:
   Invoice( string, string, int, int );

   void setPartNumber( string );  //零件号
   string getPartNumber();
   void setPartDescription( string ); //零件描述
   string getPartDescription();
   void setQuantity( int );  //商品售出量
   int getQuantity();
   void setPricePerItem( int );   //商品单价
   int getPricePerItem();

   int getInvoiceAmount();
private:
   string partNumber;                  string partDescription;
   int quantity;                              int pricePerItem;
};
Invoice::Invoice( string number, string description, int count,
   int price )
{
   setPartNumber( number );
   setPartDescription( description );
   setQuantity( count )；
   setPricePerItem( price );
}

void Invoice::setPartNumber( string number ) const
{
   partNumber = number;
}
string Invoice::getPartNumber() const
{
   return partNumber;
}
void Invoice::setPartDescription( string description )
{
   partDescription = description;
}
string Invoice::getPartDescription() const
{
   return partDescription;
}
void Invoice::setQuantity( int count )
{
   if ( count > 0 )
      quantity = count;
   if ( count <= 0 )
   {
      quantity = 0;
      cout << "\nquantity cannot be negative. quantity set to 0.\n";
   }
}；
int Invoice::getQuantity()
{
   return quantity;
}
void Invoice::setPricePerItem( int price )
{
   if ( price > 0 )
      pricePerItem = price;
   if ( price <= 0 )
   {
      pricePerItem = 0;
      cout << "\npricePerItem cannot be negative. " << "pricePerItem set to 0.\n" <<endl;
   }
}
int Invoice::getPricePerItem()
{
   return pricePerItem;
}
int Invoice::getInvoiceAmount()
{
   return getQuantity() * getPricePerItem();
}
#endif
#include <iostream>
#include <string>
#include “Invoice.h”
using namespace std;
int main()
{
   Invoice invoice( "12345", "Hammer", 100, 5 );
   cout << "Part number: " << invoice.getPartNumber() << endl;
   cout << "Part description: " << invoice.getPartDescription() << endl;
   cout << "Quantity: " << invoice.getQuantity() << endl;
   cout << "Price per item: $" << invoice.getPricePerItem() << endl;
   cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;

   invoice.setPartNumber( "123456" );
   invoice.setPartDescription( "Saw" );
   invoice.setQuantity( -5 );
   invoice.setPricePerItem( 10 );
   cout << "\nInvoice data members modified.\n\n";
   cout << "Part number: " << invoice.getPartNumber() << endl;
   cout << "Part description: " << invoice.getPartDescription() << endl;
   cout << "Quantity: " << invoice.getQuantity() << endl;
   cout << "Price per item: $" << invoice.getPricePerItem() << endl;
   cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;
   return 0;
}
