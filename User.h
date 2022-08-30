#pragma once
#include<string>
#include"Address.h"
using namespace std;
class User : public Address
{
private:
	int id;
	string f_Name,l_Name,gender,city;
public:
	User();
	void set_user();
	void print_user();
	void Edit_User();
	void print_all();
};

