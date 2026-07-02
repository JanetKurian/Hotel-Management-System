#include "menu.h"
#include "MenuItem.h"
#include "Bill.h"
#include <fstream>
#include <iostream>

using namespace std;

bool Menu::loadMenu(const string &filename)
{
	ifstream file(filename);

	if(!file)
	{
		cout<<"Cannot open menu file\n";
		return false;
	}

	MenuItem item;

	while(file >> item.id
	        >> item.name
	        >> item.quantity
	        >> item.price)
	{
		items.push_back(item);
	}

	return true;
}

void Menu::displayMenu()
{
	cout<<"\nFood Menu\n";

	for(const auto &item : items)
	{
		cout<<item.id
		    <<" "
		    <<item.name
		    <<" Qty:"
		    <<item.quantity
		    <<" Price:"
		    <<item.price
		    <<endl;
	}
}

void Menu::orderFood(Bill &bill)
{
	displayMenu();

	int choice;
	int qty;

	cout<<"\nEnter Item ID : ";
	cin>>choice;

	cout<<"Enter Quantity : ";
	cin>>qty;

	for(auto &item : items)
	{
		if(item.id==choice)
		{
			if(item.quantity>=qty)
			{
				item.quantity-=qty;

				cout<<"\nOrder Successful\n";
				bill.addItem(item.price, qty);

				// cout<<"Bill = "
				//     <<qty*item.price
				//     <<endl;
			}
			else
			{
				cout<<"Only "
				    <<item.quantity
				    <<" available\n";
			}

			return;
		}
	}

	cout<<"Invalid Item\n";
}

void Menu::saveMenu(const string &filename)
{
	ofstream file(filename);

	for(const auto &item : items)
	{
		file
		        <<item.id<<" "
		        <<item.name<<" "
		        <<item.quantity<<" "
		        <<item.price<<endl;
	}
}