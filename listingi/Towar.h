#pragma once
#include <string>
#include <fstream>
class Commodity 
{
private:
	std::string nrArt;
	std::string productName;
	int pcs;
	double netPurchasePrice=0;
	double tax=0;
	double grossPurchasePrice=0;
	double margin=0;
	double netSalesPrice=0;
	double grossSalesPrice=0;

public:
	Commodity();
	void add();
	double netCalculation(double netPurchasePrice, double netSalesPrice, double margin);
	double grossCalculation(double netPurchasePrice);
	void display();
	~Commodity();
};

