//Fragment zwi�zany z ddiagramem aktywno�ci
#include <string>
#include <list>
#include "Product.h"
#include "Cart.h"
#include <iostream>

using namespace std;
void process() {
	//Wykonaj zadania zwi�zane z logowaniem
		//Zaputaj o user name
		//Zapyaj o has�o
		//Sprawdzenie poprawno�ci
	//Lista nazw produkt�w
	list<Product*> products = list<Product*>();
	Cart* cart = new Cart();
	//Wype�nienie listy z UI u�ytkownika
	for (auto it = products.begin(); it != products.end(); it++) {
		Product* p = *it;
		std::cout << "Czy moze byc" << p->description;
		bool choice;
		std::cin >> choice;
		if (choice) {
			cart->add_product(p);
		}
		else {
			continue;
		}
	}
}