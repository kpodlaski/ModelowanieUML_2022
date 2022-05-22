package app;

import java.util.Scanner;

public class Shop {
    static boolean paymentVerified = false;
    public static void main(String[] a) throws InterruptedException {
        Scanner reader = new Scanner(System.in);
        //LogInUser
        System.out.println("Podaj username");
        //...
        //Po zalogowaniu
        Client client = new Client(); //Efekt logowania
        System.out.println("Witamy w sklepie");
        // Wyświetl menu
        //Obsługa rozkazów
        //Zakończ zakupy, stwórz zamówienie
        Order order = client.createOrder();
        System.out.println("Jak chesz płacić:");
        System.out.println("[1] transfer");
        System.out.println("[2] online");
        System.out.println("[3] blik");
        int choice = reader.nextInt();
        switch (choice){
            case 1 : //Do transfer
                    break;
            case 2 : //Do online
                    break;
            case 3 : //Do blik
                    break;
        }
        //Send confirmation mail
        System.out.println("Czekanm na płatność");
        while (!paymentVerified){
            Thread.sleep(300);
        }
        for (Product p: order.getProducts()) {
            System.out.println("Zapakuj "+p);
            reader.next();
        }
        System.out.println("Naklej address: ");
        System.out.println(client.getAddress());
    }

    static void  setPaymentVerifiedToTrue(){
        paymentVerified=true;
    }
}
