#include"Hanghoa.h"
hanghoa::hanghoa() {
	mahang = "";
	tenhang = "";
	nsx = "";
	mau = "";
	giaban = 0;
	ngaynhap = "";
	soluong = 0;
}
hanghoa::~hanghoa() { ; }
istream& operator>>(istream& in, hanghoa& h) {
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
ostream& operator<<(ostream& out, hanghoa h) {
	out << "ma hang:" << h.mahang << endl;
	out << "ten hang:" << h.tenhang << endl;
	out << "ngay san xuat:" << h.nsx << endl;
	out << "mau:" << h.mau << endl;
	out << "gia ban:" << h.giaban << endl;
	out << "ngay nhap kho:" << h.ngaynhap << endl;
	out << "so luong:" <<h.soluong;
	return out;

}
string hanghoa::getmahang() {
	return mahang;
}
string hanghoa::gettenhang() {
	return tenhang;
}
string hanghoa::getmau(){
    return mau;
}
int hanghoa::getgiaban() {
	return giaban;
}
int hanghoa::getsoluong(){{
    return soluong;
}}