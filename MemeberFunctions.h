// Member Functions Definition

#include "class.h" // class Definition
#include <iostream>
#include <iomanip>
using namespace std;

int Unique = 0;

// defintion of create account
void Account ::create_account()
{
    cout << "\nGreetings You are welcome to our Portfolio\n";
    cout << "\nEnter The Account Number : ";
    cin >> acc_no;
    while (cin.fail())
    // Not an int value
    {
        cout << "\nError !!! Account Number Should be a number type(int)" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> acc_no;
    }
    cout << "\nEnter The First Name of The Account Holder : ";
    cin.ignore();
    cin.getline(fname, 20);

    cout << "\nEnter The Last Name of The Account Holder : ";
    // cin.ignore();
    cin.getline(lname, 20);

    cout << "\nEnter The Address of The Account Holder : ";
    // cin.ignore();
    cin.getline(address, 50);

    cout << "\nEnter Type of The Account *Current or *Saving (C/S) : ";
    cin >> type;

    if (type != 's' || type != 'S' || type != 'c' || type != 'C')
        type = 'S';
    type = toupper(type);

    cin.ignore();
    cout << "\nEnter the Initial amount (>= 500 for Saving and >= 1000 for current) : ";
    cin >> deposit;

    Unique = acc_no;

    cout << "\n\nAccount Created.........";
}

// defintion of show account
void Account ::show_account()
{
    cout << "\nAccount No. : " << acc_no;
    cout << "\nAccount Holder Name : ";
    cout << fname<<" "<<lname;
    cout << "\nAccount Holder Address : ";
    cout << address;
    cout << "\nType of Account : " << type;
    cout << "\nBalance amount : " << deposit;
}

// defintion of modify func
void Account ::modify()
{
    cout << "\nAccount No. : " << acc_no;
    cout << "\nModify Account Holder First Name : ";
    cin.ignore();
    cin.getline(fname, 20);
    cout << "\nModify Account Holder Last Name : ";
    // cin.ignore();
    cin.getline(lname, 20);
    cout << "\nModify Account Holder Address : ";
    // cin.ignore();
    cin.getline(address, 50);
    cout << "\nModify Type of Account : ";
    cin >> type;
    type = toupper(type);
    cout << "\nModify Balance amount : ";
    cin >> deposit;
}

// definition of deposit_money func
void Account ::deposit_money(int x)
{
    deposit += x;
}

// defintion of draw func
void Account ::draw(int x)
{
    deposit -= x;
}

// defintion of report func
void Account ::report()
{
    // cout << acc_no << setw(20) << " " << name << setw(15) << " " << type << setw(17) << deposit << endl;
    cout << setw(10) << setfill(' ') << acc_no;
    cout << setw(20) << setfill(' ') << fname;
    cout << setw(20) << setfill(' ') << lname;
    cout << setw(25) << setfill(' ') << address;
    cout << setw(10) << setfill(' ') << type;
    cout << setw(20) << setfill(' ') << deposit;
}

// definition of retaccno
int Account ::retaccno()
{
    return acc_no;
}

// defintion of return deposit
int Account ::retdeposit()
{
    return deposit;
}

// definition of rettype func
char Account ::rettype()
{
    return type;
}