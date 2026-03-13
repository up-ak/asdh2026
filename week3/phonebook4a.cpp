#include <iostream>
using namespace std;

class Contact
{
public:
    string name;
    string number;

    Contact() {}

    Contact(string _name, string _number)
    {
        name = _name;
        number = _number;
    }

    void print()
    {
        cout << "Emri: " << name << " - ";
        cout << "Numri: " << number << endl;
    }
};

class Phonebook
{
    string name;
    int capacity;
    int count;
    Contact *contacts = nullptr;

public:
    Phonebook(int _capacity)
    {
        count = 0;
        int capacity = _capacity;
        contacts = new Contact[_capacity];
    }

    void add()
    {
        cout
            << "Vendos emrin: ";
        string emri;
        cin >> emri;
        cout << "Vendos numrin: ";
        string numri;
        cin >> numri;

        contacts[count].name = emri;
        contacts[count].number = numri;
        count++;
    }

    void list()
    {
        for (int i = 0; i < count; i++)
        {
            contacts[i].print();
        }
    }

    void edit()
    {
        // gjeje kontaktin
        cout << "Shkruani emrin e kontaktit qe doni ta ndryshoni: ";
        string name;
        cin >> name;
        bool found = false;

        for (int i = 0; i < count; i++)
        {
            if (contacts[i].name == name)
            {
                // edit
                cout << "Vendosni numrin e ri: ";
                cin >> contacts[i].number;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Nuk u gjet" << endl;
        }
    }
};

int main()
{
    int capacity;
    cout << "Shtypni madhesin e phonebook: ";
    cin >> capacity;

    Phonebook phonebook(capacity);

    while (true)
    {
        cout << "---------------------- \n Zgjidhni opsionin: \n 1 - fut \n 2 - edit \n 3 - listo \n 4 - perfundo \n Opsioni: ";

        int option;
        cin >> option;

        cout << "---------------------- \n";

        switch (option)
        {
        case 1:
            phonebook.add();
            break;
        case 2:
            phonebook.edit();
            break;
        case 3:
            phonebook.list();
            break;
        case 4:
            return 0;
        }
    }

    return 0;
}