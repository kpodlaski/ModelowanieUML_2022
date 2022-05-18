#pragma once
#include "Cart.h"

class Mail_System {
	public:
		void send_confirmation_to_client();
};

class Shop
{
	public: 
		bool login();
		void finalize_cart(Cart* c); 
		double cout_values_and_taxes(Cart* c);
	private:
		Mail_System* mail_system;
};

