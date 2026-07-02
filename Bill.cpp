#include "Bill.h"

#include <iostream>

using namespace std;

Bill::Bill()
{
    total=0;
}

void Bill::addItem(double price,int qty)
{
    total+=price*qty;
}

void Bill::printBill(const Customer &customer)
{
    cout<<"\n========================";
    cout<<"\n HOTEL BILL";
    cout<<"\n========================";

    customer.display();

    cout<<"\nFood Bill : "<<total;

    cout<<"\nGST (5%) : "<<total*0.05;

    cout<<"\nGrand Total : "<<total*1.05;
}