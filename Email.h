#pragma once
#include<string>
#include<vector>
#include"Phone.h"
using namespace std;

class Email : public Phone
{
	int type;
	vector<string>email;
	string description_email;
public :
	Email();
	~Email();
	void add_email();
	void decription_Email();
	void Get_Email();
	void print_Email();
};

