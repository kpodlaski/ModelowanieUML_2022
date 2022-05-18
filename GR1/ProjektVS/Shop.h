#pragma once

class Order;
class OPS {
public: 
	void start_payment(int id_transaction, string transaction_data, 
		double value);
};

class Shop
{
	public:
		double sum_order(Order* order);
		OPS* ops;
		void payment_success(int id_transaction);
		void cancel_payment(int id_transaction);
	private: 
		void diagram_sekwencji(Order* order);
		void cancel_order(Order* o);
};

