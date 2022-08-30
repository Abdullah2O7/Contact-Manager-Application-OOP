#include "Phone.h"
#include"fstream"
#include<iostream>
using namespace std;

Phone::Phone()
{
	type_phone = phone.size();
}

Phone::~Phone()
{
}

void Phone::add_phone()
{
	fstream fout("Contact.text", ios::app);
	char x = '1';
	int c, i=1 ;
	while (x != '0' && x != 'n')
	{
		cout<<"Enter The Num_phone(" <<i<<") : ";
		cin >> c;
		int v = 0;
		phone.push_back(c);
		fout << "Phone(" << i << "):  " << phone[v] << "\n";
		i++;
		cout << "If You Want TO add a new number please Enter (1/y) Else Enter (0/n) : ";
		cin >> x;
		v++;
	}
}

void Phone::Description_Phone()
{
	string y;
	cout << "Enter the description_Phone  : ";
	cin >> y;
	description = y;
}

void Phone::Get_Phone()
{
	add_phone();
	Description_Phone();
}

void Phone::print_phone()
{
	for(int c = 0, i = 1; c < phone.size(); c++, i++)
	{
		cout << "\tPhone(" << i << ")" << phone[c] << "\n";
	}
}

bool Phone::Search_phone()
{
	cout << "Enter The Phone No : ";
	int p;
	cin >>p;
	bool result = false;
	for (int c = 0; c < phone.size(); c++)
	{
		if (p == phone[c])
		{
			result = true;
			break;
		}
		else
			;
	}
	this->p = result;
	return p;
}

void Phone::Edit_Phone1()
{
	int c = 0;
	cin >> c;
	while (c < phone.size())
	{
		int i=1;
		cout << "Enter the new phone(" << i << "): ";
		cin >> phone[c];
		i++;
		c++;
	}
}