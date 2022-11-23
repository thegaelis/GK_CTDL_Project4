#pragma once

// #include <iostream>
#include <string>
#include "Queue.h"
using namespace std;
class Donhang {
private:

	int Number;
    int items_count;
	
	double totalPrice;
	string Name;
	string Address;
	string Phone;
	string Day;
public:
	Donhang();
	~Donhang();
	void addItem(Hanghoa currentItem);
    void GettotalPrice();
	friend istream& operator >> (istream& is, Donhang& p);
	friend ostream& operator << (ostream& os, Donhang p);
};

Queue <Donhang> List_Don_Hang;

