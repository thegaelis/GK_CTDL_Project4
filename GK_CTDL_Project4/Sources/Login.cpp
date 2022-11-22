#include "Login.h"

Login::Login() {
	User = "";
	Password = "";
}
Login::Login(const Login& p) {
	User = p.User;
	Password = p.Password;
}
Login::~Login() {}
void Login::SetUser(string user) {
	User = user;
}
void Login::SetPassword(string password) {
	Password = password;
}
string Login::GetUser() {
	return User;
}
string Login::GetPassword() {
	return Password;
}
istream& operator >> (istream& is, Login& login) {
	getline(is, login.User);
	getline(is,login.Password);
	return is;
}
bool Login::operator == (Login p) {
	if (User == p.User && Password == p.Password) {
		return true;
	}
	return false;
}