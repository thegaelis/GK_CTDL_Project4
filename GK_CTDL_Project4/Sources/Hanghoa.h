#pragma once
#include<iostream>
#include<string>
using namespace std;
 
class hanghoa {
	string mahang;
	string tenhang;
	string nsx;
	string mau;
	int giaban;
	string ngaynhap;
	int soluong;
public:
	hanghoa();
	~hanghoa();
	friend istream& operator>>(istream& in, hanghoa& h);
	friend ostream& operator<<(ostream& out, hanghoa h);
	string getmahang();
	string gettenhang();
    string getmau();
	int getgiaban();
    int getsoluong();
};
