#ifndef BILL_H
#define BILL_H

#include "customer.h"

class Bill
{
private:

    double total;

public:

    Bill();

    void addItem(double price,int qty);

    void printBill(const Customer &customer);

};

#endif