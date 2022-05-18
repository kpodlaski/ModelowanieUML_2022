//Fragment zwi¹zany z ddiagramem aktywnoœci
#include <string>
#include <list>
#include "Product.h"
#include "Cart.h"
#include <iostream>

using namespace std;
void process() {
	//Wykonaj zadania zwi¹zane z logowaniem
		//Zaputaj o user name
		//Zapyaj o has³o
		//Sprawdzenie poprawnoœci
	//Lista nazw produktów
	list<Product*> products = list<Product*>();
	Cart* cart = new Cart();
	//Wype³nienie listy z UI u¿ytkownika
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