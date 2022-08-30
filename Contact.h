#pragma once
#include "User.h"
class Contact : public User
{
private:
	int count_user = 0, type = 5;
	User size_user[5];
public:
	Contact();
	void Add_user();
	void cout_User();
	void Show();
	void Edit_Contact();
	void search_user();
};

