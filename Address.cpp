#include "Address.h"
#include<iostream>
#include<fstream>
using namespace std;

Address::Address()
{
}

void Address::add_address()
{
	fstream fout("Contact.text", ios::app);
	char x = '1';
	int i = 1;
	string c;
	int v = 0;
	while (x != '0' && x != 'n')
	{
		cout << "Enter The Address(" << i << ") : ";
		cin >> c;
		place.push_back(c);
		fout << "Address(" << i << ")    " << place[v] << endl;
		cout << "Ig you want to add a new Address . Enter (1/y) Else Enter (0/n)\n";
		cin >> x;
		i++, v++;
	}
}

void Address::Description_Adress()
{
	string y;
	cout << "Enter the Descriptio_Address : ";
	cin >> y;
	description_address = y;
}

void Address::Get_address()
{
	add_address();
	Description_Adress();
}

void Address::print_address()
{
	for (int k = 0, i = 1; k < place.size(); k++)
	{
		cout << "\tAddress(" << i << ") : " << place[k] << endl;
		i++;
	}
}
