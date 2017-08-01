#pragma once
#include "Towar.h"
#include <string>
#include <fstream>
class Customer 
	: public Commodity
{
private:
	// 	receiver
	std::string customerID;
	std::string companyName;
	std::string street;
	std::string houseNumber;
	std::string zipCode;
	std::string city;
	std::string VATiD;
	//seller
	std::string company = {"SOMATIN Urzadzenia Pomiarowe"};
	std::string streetName = { "Kepinska" };
	std::string houseNr = { "16a/12" };
	std::string post = {"46-264"};
	std::string town = {"Komorzno"};
	std::string VAT = {"751-159-87-52"};
public:
	Customer();
	// Adding a new client
	void addNewCustomer();
	void menu();
	void cleaningCIN();
	//View  customer
	void show();
	
	~Customer();
};

