#include "InvoicePCH.h"
#include "Klient.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
Customer::Customer()
{

}
// Function introducing a new client
void Customer::addNewCustomer()
{
	
	cout << "Provide new customer data:" << endl;
	cout << "Enter the client id: ";
	getline(cin, customerID);
	cout << "Enter the name of the client company: ";
	getline(cin, companyName);
	cout << "Enter the street where the customer's business is located: ";
	getline(cin, street);
	cout << "Provide the customer house number: ";
	getline(cin, houseNumber);
	cout << "Please enter the postal code in the format XX-XXX: ";
	getline(cin, zipCode);
	cout << "Enter the city where the customer's business is located: ";
	getline(cin, city);
	cout << "Enter the customer's tax number: ";
	getline(cin, VATiD);
}



// Displaying the entered customer
void Customer::show()
{

	cout <<"Seller"<<setw(40)<< "Buyer: \n";
	cout <<company<<setw(32) << companyName << "\n";
	cout <<streetName<<" nr.: "<<houseNr<<setw(30)<< street << " nr.: " << houseNumber << "\n";
	cout <<post<<" "<<town<<setw(32)<< zipCode << " " << city << "\n";
	cout << "NIP "<<VAT<<setw(28)<<"NIP " << VATiD << "\n";
}
void Customer::cleaningCIN()
{
	bool bCzySukces = cin.good();
	cin.clear();
	cin.ignore(numeric_limits < streamsize >::max(), '\n');
}
void Customer::menu()
{
	
	int choice;

	cout << "[1]-Add a client." << endl;
	cout << "[2]-Display the entered customer." << endl;
	cout << "[3]-Add new product to the warehouse." << endl;
	cout << "[4]-Display the product you have entered." << endl;
	cout << "[5]-Generate an invoice after placing the item and the customer." << endl;
	cout << "[6]- Exit" << endl;

	cout << "Select the option you want to perform: " << endl;
	cin >> choice;

	//Buffer cleaning cin
	cleaningCIN();
	//////////////////////////////////////////////////////////////////////////
	// #TODO : Definition of a new class object Customer
	//////////////////////////////////////////////////////////////////////////

	switch (choice)
	{
	case 1:
	{

		Customer::addNewCustomer();
		menu();
		break;
	}
	case 2:
	{

		Customer::show();
		menu();
		break;
	}
	case 3:
	{
		Commodity::add();
		menu();
		break;
	}
	case 4:
	{
		Commodity::display();
		menu();
		break;
	}
	// Invoice generation
	case 5:
	{
		//////////////////////////////////////////////////////////////////////////
		// #TODO : Create overloading function to save data to a file or display data on the screen
		//////////////////////////////////////////////////////////////////////////


		ofstream file;
		file.open("Invoice Vat.txt", ios::out);
		file << "Invoice VAT" << endl;
		Customer::show();
		file << "=========================" << endl;
		Commodity::display();
		file.close();
		menu();
		break;
	}
	case 6:
	{
		cout << "Thank you for using our solution" << endl;
		cout << "Press enter to end" << endl;
		break;
	}
	default:
		cout << "There is no such option, please try again: " << endl;
		menu();
		break;

	}
}

Customer::~Customer()
{
}
