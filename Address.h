#pragma once
#include<string>
#include<vector>
#include"Email.h"
using namespace std;

class Address : public Email
{
private:
	
public:
	vector <string> place;
	string description_address;
	int type;
	Address();
	void add_address();
	void Description_Adress();
	void Get_address();
	void print_address();
};

