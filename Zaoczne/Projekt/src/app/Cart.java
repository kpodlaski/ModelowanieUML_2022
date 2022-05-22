package app;

import java.util.List;

public class Cart {
    Client client;
    List<Product> products;

    Order createOrder(){
        Order order = null;
        //.....
        return order;
    }

    public void addProduct(Product p) {
        products.add(p);
    }
}
