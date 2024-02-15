#include <iostream>
#include <string>

using namespace std;

// Abstract base class
class NoteBook
{
protected:
    int manufacturerID;
    string manufacturerName;

public:
    NoteBook(int id, const string &name) : manufacturerID(id), manufacturerName(name) {}

    int getManufacturerID() const
    {
        return manufacturerID;
    }

    string getManufacturerName() const
    {
        return manufacturerName;
    }

    void setManufacturerID(int id)
    {
        manufacturerID = id;
    }

    void setManufacturerName(const string &name)
    {
        manufacturerName = name;
    }

    virtual void display() const
    {
        cout << "Manufacturer ID: " << manufacturerID << endl;
        cout << "Manufacturer Name: " << manufacturerName << endl;
    }
};

class ENoteBook : protected NoteBook
{
private:
    int size;

public:
    ENoteBook(int id, const string &name, int s) : NoteBook(id, name), size(s) {}

    void setSize(int s)
    {
        size = s;
    }

    void display() const override
    {
        NoteBook::display();
        cout << "Size: " << size << "MB" << endl;
    }
};

class PaperNoteBook : protected NoteBook
{
private:
    int totalPages;

public:
    PaperNoteBook(int id, const string &name, int pages) : NoteBook(id, name), totalPages(pages) {}

    void setTotalPages(int pages)
    {
        totalPages = pages;
    }
    void display() const override
    {
        NoteBook::display();
        cout << "Total Pages: " << totalPages << endl;
    }
};

int main()
{
    NoteBook notebook(1, "UMT");
    ENoteBook enotebook(2, "UCP", 14);
    PaperNoteBook papernotebook(3, "AIR", 200);

    cout << "Displaying NoteBook details:" << endl;
    notebook.display();

    cout << "\nDisplaying ENoteBook details:" << endl;
    enotebook.display();

    cout << "\nDisplaying PaperNoteBook details:" << endl;
    papernotebook.display();

    return 0;
}