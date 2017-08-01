// listingi.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//autor Rafal Bujak 
// last update 01-08-2017


#include "InvoicePCH.h"
#include <iostream>
#include "Klient.h" 
#include <limits>
using namespace std;



int main()
{
	Customer start;
	cout << "Welcome to the VAT invoice program" << endl;
	start.menu();
	/*Klient nowy;

	nowy.wypelnij();
	cout << "-------------" << endl;
	nowy.wyswietl();*/
	//getchar();
	getchar();

	return 0;
}

// do zrobienia:
// popraw wyswietlanie odbiorcy i nabywcy
// zastanow sie nad jakims sposobem w ktorym  bedzie mozna dodac kilka towarow do faktury
// porob zabezpieczenia przy wpisywaniu danych do programu by reagowal odpowiednio do sytuacji
