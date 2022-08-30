#include "Contact.h"
#include<iostream>
using namespace std;
Contact::Contact()
{
}

void Contact::Add_user()
{
	cout << "Enetr Num_User you want to add     (  Note : MAX_USER = 5 ) : ";
	int i;
	cin >> i;
	this->type = i;
	for (int c = 0; c < i; c++)
	{
		size_user[c].set_user();
		count_user++;
	}
}

void Contact::cout_User()
{
	cout << "The count User Add is : " << count_user << endl;
}

void Contact::Show()
{
	for (int i = 0; i < type; i++)
	{
		size_user[i].print_user();
		cout << "\t\t ========================\n";
	}
}

void Contact::Edit_Contact()
{
	bool found=false;
	int x;
	int ctr = 0;
	cout << "\t\t=========================\n";
	cout << "\tWhat You want to edit ? \n" <<
		"[1].Phone\n" << "[2].Name\n";
	cin >> x;
	switch (x)
	{
	case 1:
		while (ctr < type)
		{
			found = size_user[ctr].Search_phone();
			if (found == true)
			{
				size_user[ctr].Edit_Phone1();
				break;
			}
			else { ctr++; }
		}
		break;
	case 2:
		while (ctr < type)
		{
			found = size_user[ctr].Search_phone();
			if (found == true)
			{
				size_user[ctr].Edit_User();
				break;
			}
			else
				ctr++;
		}
		break;
	}
}

void Contact::search_user()
{
	bool found=false;
	int c = 0; // counter 
	while (c < type)// type = 5 
	{
		//check by the phone NO if the user is found or not
		found = size_user[c].Search_phone();
		if (found == true)
			break;
		else
			c++;
	}
	if (found == true) {
		cout << "\t\tThe User found \n\n";
		size_user[c].print_user();
	}
	else
		cout << "\t\tNot Found ! \n";
}
