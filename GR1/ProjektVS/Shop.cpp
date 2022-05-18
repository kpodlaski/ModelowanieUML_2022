#include "Shop.h"
#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;

void Shop::payment_success(int id_transaction)
{
	//Select employee from Employees
	Employee* e;
	e->prepare_delivery(id_transaction);
}

void Shop::cancel_payment(int id_transaction) {
	//Znajd� transakcj� o id_transaction
	//Znajd� order z ni� zwi�zany
	Order* o;
	this->cancel_order(o);
	//zdj�� transakcje z rejestr�w
}

//implementacja diagramu sekwencji
void Shop::diagram_sekwencji( Order* order) {
	double value = this->sum_order(order);
	//Create next id transaction 
	int id_transaction = 123;
	//Rejestr tranzakcji aby do niej p�niej wr�ci�
	string transaction_data;
	ops->start_payment(id_transaction, transaction_data, value);
	//Przesy�amy usera do OPS
	cout << "Doko�cz transakcj� " << id_transaction << " " << transaction_data;
	//Cz�� procesu u usera, interfejs u�ytkownika, OPS i w sytemie Bankowym
}

void Shop::cancel_order(Order* o) {
	//Zdj�� o z rejestr�w
	delete o;
}