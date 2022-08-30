#include <iostream>
#include"Address.h"
#include"Email.h"
#include"Phone.h"
#include"Contact.h"
using namespace std;

int main()
{
    Contact c1;
    int x = -1;
    while (x != 0)
    {
        cout << "\n\t\t\t CONTACT MANAGER APPLICATION\n";
        cout << "\t\t==============================================\n";
        cout << "Choose one of these options\n";
        cout << "\t[1].ADD USER\n";
        cout << "\t[2].EDIT CONTACT\n";
        cout << "\t[3].DELETE USER\n";
        cout << "\t[4].SEARCH \n";
        cout << "\t[5].SHOW ALL CONTACTS\n";
        cout << "\t[0].EXIT\n";
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "\tADD NEW USER\n";
            c1.Add_user();
            cout << "\t\t CREATED SUCCESSFULLY :) \n\n";
            break;
        case 2:
            cout << "\tEDIT\n";
            c1.Edit_Contact();
            break;
        case 3:
            cout << "DELETE USER\n";
            break;
        case 4:
            cout << "SEARCH\n";
            c1.search_user();
            break;
        case 5:
            cout << "\t\tALL CONTACTS\n";
            c1.Show();
            break;
        default:
            cout << "\t=============" << endl;
            cout << "\t=ERROR ENTER=" << endl;
            cout << "\t=============" << endl;
            break;

        }
    }
        cout << "\t\t\t\tTHANKS :)" << endl;
        return 0;
    
    
}


