
#include "menu.h"
#include "Bill.h"
#include "customer.h"

int main(){
    Customer customer;

customer.input();

customer.saveToFile("customer.txt");

Menu menu;

menu.loadMenu("menu.txt");

Bill bill;

menu.orderFood(bill);

bill.printBill(customer);
}
