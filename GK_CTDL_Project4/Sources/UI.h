#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include "UIFormat.h"
using namespace std;

string Enror(string s)
{
	SET_COLOR(4);
	cout << s << endl;
	SET_COLOR(7);
	return s;
}
string inputPassword(string& s) {
	s = "";
	char ch;
	ch = _getch();
	while (ch != 13) {//character 13 is enter
		s.push_back(ch);
		cout << '*';
		ch = _getch();
	}
	return s;
}
void Title(string s);
void controlMenu();
bool controlBackMenu();
bool controlBackMenuQuanLi();
void BackMenu();
void BackMenuQuanLi();
void Run();
bool Menu();
void Menu_thong_tin_hang_hoa();
bool Menu_Tim_kiem();
bool Menu_Dat_Hang();
bool Menu_Dang_Nhap_Quan_Li();
bool Menu_Quan_Li();
bool Menu_Quan_Li_Xu_Li_Don_Hang();
bool Menu_Quan_Li_Quan_Li_Hang_Hoa();

void Title(string s = "QUAN LI BAN HANG")
{
	system("cls");
	if (s == "QUAN LI BAN HANG")
	{
		cout << endl;
		SET_COLOR(3);
		cout << setw(10) << left << "";
		cout << setfill('*');
		cout << setw(30) << left << "" << endl;
		cout << setfill(' ');
		cout << setw(16) << left << "";
		cout << s << endl;
		cout << setw(10) << left << "";
		cout << setfill('*');
		cout << setw(30) << "" << endl;
		cout << setfill(' ');
		SET_COLOR(7);
	}
	else
	{
		cout << endl;
		SET_COLOR(3);
		cout << setw(16) << left << "";
		cout << s << endl << endl;
		SET_COLOR(7);
	}
}
void controlMenu()
{
	cout << "\t1. Hien thi thong tin hang hoa\n";
	cout << "\t2. Tim kiem thong tin hang hoa\n";
	cout << "\t3. Dat hang\n";
	cout << "\t4. Quan li\n";
	cout << "\t0. Thoat chuong trinh\n\n";
}
bool controlBackMenu() {
	do {
		cout << endl;
		cout << "\t0. Exit\n";
		cout << "Nhap lua chon: ";
		int n;
		cin >> n;
		switch (n)
		{
		case 0:
			return true;
		default:
			Enror("Ban nhap khong hop le! Vui long nhap lai");
			break;
		}
	} while (true);
}
void BackMenu() {
	if (controlBackMenu())
	{
		Run();
		return;
	}
	else {
		return;
	}
}
void Run()
{
	system("cls");
	Title();
	Menu();
}
bool Menu()
{
	do
	{
		controlMenu();
		int tmp;
		cout << "Nhap lua chon: ";
		cin >> tmp;
		switch (tmp)
		{
		case 1:
			system("cls");
			/*cout << "Hien thi thong tin hang hoa";*/
			Menu_thong_tin_hang_hoa();
			return true;
		case 2:
			system("cls");
			Menu_Tim_kiem();
			return true;

		case 3:
			system("cls");
			Menu_Dat_Hang();
			return true;

		case 4:
			system("cls");
			Menu_Dang_Nhap_Quan_Li();
			return true;

		case 0:
			return false;
		default:
			system("cls");
			Title();
			Enror("Ban nhap khong hop le! Vui long nhap lai");
			break;
		}
	} while (true);

	return true;
}
void Menu_thong_tin_hang_hoa()
{
	Title("Hien thi thong tin hang hoa");
	cout << setw(5) << left << "ID";		// độ rộng 5 ký tự, canh trái ID
	cout << setw(30) << left << "Name";	// độ rộng 30 ký tự, canh trái Name
	cout << setw(20) << right << "Price" << endl;	// độ rộng 20 ký tự, canh phải Address

	cout << setfill('-');		// set fill bằng ký tự '-' thay vì ' '
	cout << setw(55) << "-" << endl;	// fill 55 ký tự '-'

	// reset fill bằng ký tự ' '
	cout << setfill(' ');

	// in thông tin theo format như trên
	cout << setw(5) << left << 1;
	cout << setw(30) << left << "Banh";
	cout << setw(20) << right << "10000" << endl;

	cout << setw(5) << left << 2;
	cout << setw(30) << left << "Keo";
	cout << setw(20) << right << "500" << endl;

	cout << setw(5) << left << 3;
	cout << setw(30) << left << "Thuoc";
	cout << setw(20) << right << "1234" << endl;
	BackMenu();
	return;
}
bool Menu_Tim_kiem() {
	Title("Tim kiem thong tin hang hoa");
	cout << setw(5) << left << "Nhap ten hang hoa can tim: ";
	string s;
	cin.ignore();
	getline(cin, s);
	if (s == "") 
	{
		Enror("Chuoi trong!");
	}
	BackMenu();
	return true;
}
bool Menu_Dat_Hang() {
	Title("Dat hang");
	cout << "Don hang dang cho xu ly";
	BackMenu();
	return true;
}
bool Menu_Dang_Nhap_Quan_Li() {
	Title("Dang Nhap ADMIN");
	int count = 0;
	do {
		cin.ignore();
		string user;
		string pass;
		cout << "\tUser: ";
		getline(cin, user);
		cout << setw(5) << left << "\tPassword: ";
		inputPassword(pass);
		cout << user;
		cout << pass;
		if (user == "admin" && pass == "admin") {
			Menu_Quan_Li();
			return true;
		}
		Enror("Ban nhap khong dung! Enter de nhap lai!");
		count++;
	} while (count <= 2);
	Enror("Ban da nhap qua 3 lan!");
	BackMenu();
	return false;
}
bool Menu_Quan_Li() {
	do {
		Title("Quan Li");
	cout << "1. Xu li don hang\n";
	cout << "2. Quan li hang hoa\n";
	cout << "3. Exit\n";
	int n;
	cout << "Nhap lua chon: ";
	cin >> n;
	switch (n)
	{
	case 1: Menu_Quan_Li_Xu_Li_Don_Hang();
		return true;
	case 2: Menu_Quan_Li_Quan_Li_Hang_Hoa();
		return true;
	case 3: Run();
		return true;
	default:
		break;
	}
	} while (true);
	return false;
}
bool controlBackMenuQuanLi() {
	do {
		cout << endl;
		cout << "\t0. Exit\n";
		cout << "Nhap lua chon: ";
		int n;
		cin >> n;
		switch (n)
		{
		case 0:
			return true;
		default:
			Enror("Ban nhap khong hop le! Vui long nhap lai");
			break;
		}
	} while (true);
	return false;
}
void BackMenuQuanLi() {
	if (controlBackMenuQuanLi())
	{
		Menu_Quan_Li();
		return;
	}
	else {
		return;
	}
}
bool Menu_Quan_Li_Xu_Li_Don_Hang() {
	Title("Xu Li Don Hang");
	cout << "Menu_Quan_Li_Xu_Li_Don_Hang";
	BackMenuQuanLi();
	return false;
}
bool Menu_Quan_Li_Quan_Li_Hang_Hoa() {
	Title("Quan Li Hang Hoa");
	cout << "Menu_Quan_Li_Quan_Li_Hang_Hoa";
	BackMenuQuanLi();
	return false;
}