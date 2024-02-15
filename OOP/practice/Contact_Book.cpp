#include <iostream>
#include <string>
using namespace std;

class Contact
{
private:
    static int contactCount;
    int contactId;
    string name;
    string phone;
    string address;
    string company;
    string designation;

public:
    Contact();
    void displayContact() const;
    bool isEmptyCompanyAndDesignation() const;

    friend class ContactBook; // friend func allow book to access private
};

int Contact::contactCount = 0;

Contact::Contact()
{
    contactId = ++contactCount; // Assign a unique contactId
}

void Contact::displayContact() const
{
    cout << "Contact ID: " << contactId << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
    cout << "Address: " << address << endl;
    cout << "Company: " << company << endl;
    cout << "Designation: " << designation << endl;
    cout << "-------------------------" << endl;
}

bool Contact::isEmptyCompanyAndDesignation() const
{
    return company.empty() && designation.empty();
}

class ContactBook
{
private:
    Contact contacts[100];
    int contactCount;

public:
    ContactBook();
    void addContact();
    void updateContact();
    void deleteContact();
    void displayContact();
    void displayEmptyCompanyAndDesignation();
};

ContactBook::ContactBook()
{
    contactCount = 0;
}

void ContactBook::addContact()
{
    if (contactCount < 100)
    {
        Contact newContact;
        cout << "Enter Contact Details:" << endl;
        cout << "Name: ";
        cin >> newContact.name;
        cout << "Phone: ";
        cin >> newContact.phone;
        cout << "Address: ";
        cin >> newContact.address;
        cout << "Company: ";
        cin >> newContact.company;
        cout << "Designation: ";
        cin >> newContact.designation;

        contacts[contactCount++] = newContact;
        cout << "Contact added successfully!" << endl;
    }
    else
    {
        cout << "Contact book is full. Cannot add more contacts." << endl;
    }
}

void ContactBook::updateContact()
{
    int id;
    cout << "Enter Contact ID to update: ";
    cin >> id;

    for (int i = 0; i < contactCount; ++i)
    {
        if (contacts[i].contactId == id)
        {
            cout << "Update Contact Details:" << endl;
            cout << "Name: ";
            cin >> contacts[i].name;
            cout << "Phone: ";
            cin >> contacts[i].phone;
            cout << "Address: ";
            cin >> contacts[i].address;
            cout << "Company: ";
            cin >> contacts[i].company;
            cout << "Designation: ";
            cin >> contacts[i].designation;

            cout << "Contact updated successfully!" << endl;
            return;
        }
    }

    cout << "Contact ID not found." << endl;
}

void ContactBook::deleteContact()
{
    int id;
    cout << "Enter Contact ID to delete: ";
    cin >> id;

    for (int i = 0; i < contactCount; ++i)
    {
        if (contacts[i].contactId == id)
        {
            for (int j = i; j < contactCount - 1; ++j)
            {
                contacts[j] = contacts[j + 1];
            }
            --contactCount;

            cout << "Contact deleted successfully!" << endl;
            return;
        }
    }

    cout << "Contact ID not found." << endl;
}

void ContactBook::displayContact()
{
    cout << "Displaying Contacts:" << endl;
    for (int i = 0; i < contactCount; ++i)
    {
        contacts[i].displayContact();
    }
}

void ContactBook::displayEmptyCompanyAndDesignation()
{
    cout << "Displaying Contacts with Empty Company and Designation:" << endl;
    for (int i = 0; i < contactCount; ++i)
    {
        if (contacts[i].isEmptyCompanyAndDesignation())
        {
            contacts[i].displayContact();
        }
    }
}

int main()
{
    ContactBook contactBook;

    while (true)
    {
        cout << "Contact Book Menu:" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Update Contact" << endl;
        cout << "3. Delete Contact" << endl;
        cout << "4. Display All Contacts" << endl;
        cout << "5. Display Contacts with Empty Company and Designation" << endl;
        cout << "6. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            contactBook.addContact();
            break;
        case 2:
            contactBook.updateContact();
            break;
        case 3:
            contactBook.deleteContact();
            break;
        case 4:
            contactBook.displayContact();
            break;
        case 5:
            contactBook.displayEmptyCompanyAndDesignation();
            break;
        case 6:
            cout << "Exiting the program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
