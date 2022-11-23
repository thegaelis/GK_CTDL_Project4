#pragma once
#include<iostream>
#include<string>
using namespace std;
 
class Hanghoa {
	string mahang;
	string tenhang;
	string nsx;
	string mau;
	int giaban;
	string ngaynhap;
	int soluong;
public:
	Hanghoa();
	~Hanghoa();
	friend istream& operator>>(istream& in, Hanghoa& h);
	friend ostream& operator<<(ostream& out, Hanghoa h);
	string getmahang();
	string gettenhang();
    string getmau();
	int getgiaban();
    int getsoluong();
};
