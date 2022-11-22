#include <iostream>

using namespace std;

class Login {
	string User;
	string Password;
public:
	Login();
	Login(const Login& copy);
	~Login();
	friend istream& operator >> (istream& is, Login& login);
	bool operator ==(Login p);
	void SetUser(string user);
	void SetPassword(string password);
	string GetUser();
	string GetPassword();
};
