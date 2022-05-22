package app;

public class Client extends Person{

    String address;
    Cart cart;

    void addProductToCart(Product p){
        cart.addProduct(p);
    }

    public Order createOrder() {
        return cart.createOrder();
    }
}
