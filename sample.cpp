//------------------------------------------------------------------
// File name:   change.cpp
// Assign ID:   PROG1b
// Due Date:    01/10/13 at 11pm 
//
// Purpose:     Calculate change from purchase.
//
// Author:      cop3014cjoe Dr Jones
//------------------------------------------------------------------
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
   //----------------------------------------------------------------------
   //  Declare variables
   //----------------------------------------------------------------------
   float Price;     // Price of item.
   float Tendered;  // Amount given to cashier by customer.
   float Change;    // Amount of change returned.

   //-|----------------------------------------------------------------------
   //-| 1. Read the price of the item.
   //-|----------------------------------------------------------------------
   cout << "Enter price of item: ";
   cin >> Price;

   //-|----------------------------------------------------------------------
   //-| 2. Read the amount tendered by the customer.
   //-|----------------------------------------------------------------------
   cout << "Enter the amount the customer tenders: ";
   cin >> Tendered;

   //-|----------------------------------------------------------------------
   //-| 3. Compute the change due back to customer.
   //-|----------------------------------------------------------------------
   Change = Tendered - Price;

   //-|----------------------------------------------------------------------
   //-| 4. Print the receipt.
   //-|----------------------------------------------------------------------
   cout << endl;
   cout << "Item Price  = " << Price << endl;
   cout << "Amount Paid = " << Tendered << endl;
   cout << "Change Due  = " << Change << endl;
   cout << endl;

   //-|----------------------------------------------------------------------
   //-| Print the copyright notice declaring authorship again.
   //-|----------------------------------------------------------------------
   cout << endl << "(c) 2014, cop3014cjoe Dr Jones" << endl << endl; 

   return 0;

}//main


