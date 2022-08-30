#include "User.h"
#include"Address.h"
#include"Email.h"
#include"Phone.h"
#include<iostream>
#include<fstream>
using namespace std;
User::User()
{
}

void User::set_user()
{
	fstream fout("Contact.text", ios::app);
	cout << "Enter Your Id : "; cin >> id;
	fout << "ID :   " << id << endl;
	cout << "Enter Your F_Name & L_Name : "; cin >> f_Name >> l_Name;
	fout << "The Full Name :    " << f_Name << " " << l_Name << endl;
	cout << "Enter the Gender : "; cin >> gender;
	fout << "Gender :    " << gender << endl;
	cout << "Enter the City : "; cin >> city;
	fout << "City :    " << city << endl;
	Get_Phone();
	Get_Email();
	Get_address();
	fout << "\t\t====================================\n\n";
	fout.close();
}

void User::print_user()
{
	cout << "\tId : " << id << "\n"
		<< "\tThe Full Name : " << f_Name << " " << l_Name << "\n"
		<< "\tThe City : " << city << "\n"
		<< "\tThe Gender : " << gender << "\n";
	print_phone();
	print_Email();
	print_address();
}

void User::Edit_User()
{
	print_user();
	cout << "*Enter The 'NEW' F_name & L_name \n";
	cin >> f_Name >> l_Name;
}

void User::print_all()
{
	fstream fin("Contact.text", ios::in);
	string str;
	while (fin >> str)
	{
		cout << str << endl;
	}
}