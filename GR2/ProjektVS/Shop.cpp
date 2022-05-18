#include "Shop.h"
#include <iostream>
#include <string>
#include "Cart.h"

using namespace std;
bool Shop::login()
{
	cout << "Podaj email";
	string email;
	cin >> email;
	cout << "Podaj haslo";
	string passwd;
	cin >> passwd;
	bool is_ok;
	//sprawdzamy login i has³o i ustawiamy is_ok
	return is_ok;
}

void Shop::finalize_cart(Cart* c)
{
	double value = cout_values_and_taxes(c);
	//Select payment method jest w diagramie aktywnoœæi nie ma co powtarzaæ
	//trzeba jedak ujednoliciæ oba diagramy
	this->mail_system->send_confirmation_to_client();

	//Na samym koñcu
	delete c;
}

double Shop::cout_values_and_taxes(Cart* c){
	double value = 0.0;
	for (auto it = c->products.begin(); it != c->products.end(); it++) {
		value += (*it)->price*(1 + (*it)->vat_category / 100.0);
	}
	return value;
}