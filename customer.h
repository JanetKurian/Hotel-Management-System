#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer
{
private:

    int id;
    std::string name;
    std::string phone;
    int roomNo;

public:

    Customer();

    void input();

    void saveToFile(const std::string &filename);

    void display() const;

    int getRoomNo() const;
    std::string getName() const;
};

#endif