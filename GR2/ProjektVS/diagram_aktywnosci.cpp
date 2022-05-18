#include <iostream>
#include "diagram_aktywnosci.h"
#include "Cart.h"

using namespace std;

void online_payment() {}
void transfer_payment() {}
void blik_payment() {}

void aktywnosc() {
	//Sprawdzamy czy klient jest zalogowany
	//Jeœli nie to login
	//Jeœli tak to idziemy do menu g³ównego
	Cart* cart = new Cart();
	//Klient dodaje elementy do koszyka
	cout << "Select Payment Method:\n";
	cout << "[1] Card payment\n";
	cout << "[2] Blik payment\n";
	cout << "[3] Transfer payment\n";
	int choice;
	cin >> choice;
	switch (choice) {
		case 1: online_payment(); break;
		case 3: transfer_payment(); break;
		case 2: blik_payment(); break;
	}
}

void package_product(Product* p) {
	//Pakujemy produkt
}

void koniec_activity_diagram(Cart* c) {
	//Otrzymaliœmy potwierdzenie zap³aty
	//Teraz pakujemy

	for (auto it = c->products.begin(); it != c->products.end(); it++) {
		//Pakujemy produkt it'y
		package_product(*it);
	}
	//Add address to package
	//Send Package
}