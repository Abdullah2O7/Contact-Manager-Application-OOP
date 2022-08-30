#include "Email.h"
#include<iostream>
#include<fstream>
using namespace std;

Email::Email()
{
}

Email::~Email()
{
}
void Email::add_email()
{
	fstream fout("Contact.text", ios::app);
	char x = '1';
	string c;int i = 1;
	while (x != '0' && x != 'n')
	{
		cout << "Enter the Email(" << i << ") :  ";
		cin >> c;
		int v = 0;
		email.push_back(c);
		fout << "Email(" << i << ") :    " << email[v] << endl;
		cout << "Ig you want to add a new Email . Enter (1/y) Else Enter (0/n)\n";
		cin >> x;
		v++;
		i++;
	}
}

void Email::decription_Email()
{
	string y;
	cout << "Enter the Description_Email : ";
	cin >> y;
	description_email = y;
}

void Email::Get_Email()
{
	add_email();
	decription_Email();
}

void Email::print_Email()
{
	for (int c = 0, i = 1; c < email.size(); c++)
	{
		cout << "\tEmail(" << i << ") :   " << email[c] << endl;
		i++;
	}
}



