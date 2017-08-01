#include "InvoicePCH.h"
#include "Towar.h"
#include <iostream>
#include <String>
#include <iomanip>
#include <fstream>

using namespace std;

Commodity::Commodity()
{
}

void Commodity::add()
{
	cout << "Follow the on-screen instructions to add a new product." << endl;
	cout << "Please enter the article number: ";
	getline(cin, nrArt);
	cout << "Enter the name of the purchased product.: ";
	getline(cin, productName);
	cout << "Specify quantity of purchased product.: ";
	cin >> pcs;
	cout << "Give the purchase price: ";
	cin >> netPurchasePrice;
	cout << "Give a margin for the given product: ";
	cin >> margin;
	cout << "Please enter a VAT rate: ";
	cin >> tax;
}




double Commodity::grossCalculation(double netPurchasePrice)
{
	

	grossSalesPrice =( (netCalculation( netPurchasePrice, grossPurchasePrice, margin)*(tax / 100)) + netCalculation(netPurchasePrice, grossPurchasePrice, margin));
	return grossSalesPrice;
}


// Calculates the net selling price after adding a margin
double Commodity::netCalculation(double netPurchasPrice, double netSalesPrice, double margin)
{
	netSalesPrice = (netPurchasePrice *(margin / 100));
	return (netSalesPrice + netPurchasPrice)*pcs;
}

// Function to fix!!!!!

void Commodity::display()
{
	

	cout << setw(6)<<" Nr. Art " << " " <<setw(2)<< "---Product name---" << " " <<setw(5)<< "| net price " <<setw(2)<< "| VAT rate " <<setw(4)<< "| Quanity " <<setw(8)<< " | Gross price \n";
	cout << setw(6)<<nrArt << " "<<setw(2)<< productName << " "<<setw(5) << netCalculation(netPurchasePrice, netSalesPrice, margin) <<" zl "<< setw(5)<< tax << " % "<<setw(4) << pcs << " pcs. "<< grossCalculation( netPurchasePrice) <<" zl.\n";
}
Commodity::~Commodity()
{
}
