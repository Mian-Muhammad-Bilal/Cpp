#include <iostream>
#include <string>

using namespace std;

class Inventory
{
private:
    string productDescription;
    int stock;

public:
    Inventory(const string &initialProduct, int initialStock)
    {
        productDescription = initialProduct;
        if (initialStock > 20)
        {
            stock = initialStock;
        }
        else
        {
            cout << "Error: Initial stock must be greater than 20." << endl;
            stock = 0;
        }
    }

    // Member function to add stock
    void Purchase(int quantity)
    {
        stock += quantity;
    }

    // Member function to reduce stock
    void Sale(int quantity)
    {
        if (stock - quantity >= 20)
        {
            stock -= quantity;
        }
        else
        {
            cout << "Error: Stock level cannot drop below 20 after sale." << endl;
        }
    }

    // Member function to get current stock
    int getStock() const
    {
        return stock;
    }
};

int main()
{
    Inventory product1("Product1", 30);
    Inventory product2("Product2", 25);

    cout << "Initial stock for Product1: " << product1.getStock() << endl;
    cout << "Initial stock for Product2: " << product2.getStock() << endl;

    product1.Purchase(10);
    product2.Sale(5);

    cout << "Stock for Product1 after purchase: " << product1.getStock() << endl;
    cout << "Stock for Product2 after sale: " << product2.getStock() << endl;

    return 0;
}
