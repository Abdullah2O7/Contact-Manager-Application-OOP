#pragma once
#include <string>
#include<vector>
using namespace std;
class Phone
{
private:
	bool p;
	vector<int>phone;
	string description;
public:
	int type_phone;
	Phone();
	~Phone();
	void add_phone();
	void Description_Phone();
	void Get_Phone();
	void print_phone();
	bool Search_phone();
	void Edit_Phone1();
};