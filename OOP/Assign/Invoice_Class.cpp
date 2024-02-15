#include <iostream>
#include <string>

using namespace std;

class Invoice
{
private:
    string partNumber;
    string partDescription;
    int quantity;
    int pricePerItem;

public:
    Invoice(const string &num, const string &desc, int qty, int price)
    {
        partNumber = num;
        partDescription = desc;
        quantity = (qty > 0) ? qty : 0;
        pricePerItem = (price > 0) ? price : 0;
    }

    void setPartNumber(const string &num)
    {
        partNumber = num;
    }

    string getPartNumber() const
    {
        return partNumber;
    }

    void setPartDescription(const string &desc)
    {
        partDescription = desc;
    }

    string getPartDescription() const
    {
        return partDescription;
    }

    void setQuantity(int qty)
    {
        quantity = (qty > 0) ? qty : 0;
    }

    int getQuantity() const
    {
        return quantity;
    }

    void setPricePerItem(int price)
    {
        pricePerItem = (price > 0) ? price : 0;
    }

    int getPricePerItem() const
    {
        return pricePerItem;
    }

    int getInvoiceAmount() const
    {
        return quantity * pricePerItem;
    }
};

int main()
{
    Invoice item("A123", "Widget", 5, 10);

    cout << "Part Number: " << item.getPartNumber() << endl;
    cout << "Part Description: " << item.getPartDescription() << endl;
    cout << "Quantity: " << item.getQuantity() << endl;
    cout << "Price Per Item: $" << item.getPricePerItem() << endl;
    cout << "Invoice Amount: $" << item.getInvoiceAmount() << endl;

    return 0;
}
