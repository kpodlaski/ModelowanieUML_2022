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
	//ZnajdŸ transakcjê o id_transaction
	//ZnajdŸ order z ni¹ zwi¹zany
	Order* o;
	this->cancel_order(o);
	//zdj¹æ transakcje z rejestrów
}

//implementacja diagramu sekwencji
void Shop::diagram_sekwencji( Order* order) {
	double value = this->sum_order(order);
	//Create next id transaction 
	int id_transaction = 123;
	//Rejestr tranzakcji aby do niej póŸniej wróciæ
	string transaction_data;
	ops->start_payment(id_transaction, transaction_data, value);
	//Przesy³amy usera do OPS
	cout << "Dokoñcz transakcjê " << id_transaction << " " << transaction_data;
	//Czêœæ procesu u usera, interfejs u¿ytkownika, OPS i w sytemie Bankowym
}

void Shop::cancel_order(Order* o) {
	//Zdj¹æ o z rejestrów
	delete o;
}