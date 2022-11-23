#include "Donhang.h"



  Donhang:: Donhang() {
    items_count = 0;
    Number = 0;
	totalPrice = 0;
	Name = "";
	Address = "";
	Phone = "";
	Day = "";
}


void Donhang:: addItem(Hanghoa currentItem) {
    itemArray[items_count] = currentItem;
    items_count++;
}

void Donhang:: GettotalPrice() {
    

    for (int i=0; i<100; i++) {
        if (itemArray[i] != NULL) {
            totalPrice += itemArray[i].getPrice() * itemArray[i].getQuantity();
        } else {
            break;
        }
    }

   
};

istream& operator >> (istream& is, Donhang& p) {
	is >> p.Number;
	is.ignore();
    Hanghoa q;
    while(is >>q){
       p.addItem(q);
    }
	getline(is, p.Name);
	getline(is, p.Address);
	getline(is, p.Phone);
	getline(is, p.Day);
	return is;
}
ostream& operator << (ostream& os, Donhang p) {
	os << p.Number << "\n";

     for (int i=0; i<100; i++) {
        if (itemArray[i] != NULL) {
            os << itemArray[i];
        } else {
            break;
        }
    }
    os <<"\n";
    p.GettotalPrice();
	os << p.totalPrice << "\n";
	os << p.Name << "\n";
	os << p.Address << "\n";
	os << p.Phone << "\n";
	os << p.Day;
	return os;
}