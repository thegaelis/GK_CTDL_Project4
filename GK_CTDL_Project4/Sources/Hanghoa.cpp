#include"Hanghoa.h"
Hanghoa::Hanghoa() {
	mahang = "";
	tenhang = "";
	nsx = "";
	mau = "";
	giaban = 0;
	ngaynhap = "";
	soluong = 0;
}
Hanghoa::~Hanghoa() { ; }
istream& operator>>(istream& in, Hanghoa& h) {
	cout << "ma hang:"; getline(in, h.mahang);
	cout << "ten hang:"; getline(in, h.tenhang);
	cout << "ngay san xuat:"; getline(in, h.nsx);
	cout << "mau:"; getline(in, h.mau);
	cout << "gia ban:"; in>>h.giaban;
	cin.ignore();
	cout << "ngay nhap kho:"; getline(in, h.ngaynhap);
	cout << "so luong:"; in >> h.soluong;
	return in;
}
ostream& operator<<(ostream& out, Hanghoa h) {
	out << "ma hang:" << h.mahang << endl;
	out << "ten hang:" << h.tenhang << endl;
	out << "ngay san xuat:" << h.nsx << endl;
	out << "mau:" << h.mau << endl;
	out << "gia ban:" << h.giaban << endl;
	out << "ngay nhap kho:" << h.ngaynhap << endl;
	out << "so luong:" <<h.soluong;
	return out;

}
string Hanghoa::getmahang() {
	return mahang;
}
string Hanghoa::gettenhang() {
	return tenhang;
}
string Hanghoa::getmau(){
    return mau;
}
int Hanghoa::getgiaban() {
	return giaban;
}
int Hanghoa::getsoluong(){{
    return soluong;
}}