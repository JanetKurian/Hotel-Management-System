#include "customer.h"

#include <iostream>
#include <fstream>

using namespace std;

Customer::Customer()
{
    id = 0;
    roomNo = 0;
}

void Customer::input()
{
    cout<<"Customer ID : ";
    cin>>id;

    cout<<"Name : ";
    cin>>name;

    cout<<"Phone : ";
    cin>>phone;

    cout<<"Room No : ";
    cin>>roomNo;
}

void Customer::saveToFile(const string &filename)
{
    ofstream file(filename, ios::app);

    file
    <<id<<" "
    <<name<<" "
    <<phone<<" "
    <<roomNo<<endl;
}

void Customer::display() const
{
    cout<<"\nCustomer : "<<name;
    cout<<"\nRoom : "<<roomNo;
}

int Customer::getRoomNo() const
{
    return roomNo;
}

string Customer::getName() const
{
    return name;
}