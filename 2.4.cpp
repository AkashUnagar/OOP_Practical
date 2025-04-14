#include <iostream>
#include <string>
using namespace std;

int count = 0;

class store
{
    int itemid;
    string itemname;
    int price;
    int quantity;

public:
    store()
    {
        itemid = 0;
        itemname = "";
        price = 0;
        quantity = 0;
    }

    store(int id, string n, int p, int q)
    {
        itemid = id;
        itemname = n;
        price = p;
        quantity = q;
    }
    int check(int id)
    {
        if (id == itemid)
        {
            return 0;
        }
        return 1;
    }
    void addstock()
    {
        int num;
        cout << "enter quantity of item : ";
        cin >> num;
        quantity += num;
        cout << "Now stock is : " << quantity << endl
             << endl;
    }

    void decreasestock()
    {
        int num;
        cout << "enter quantity of item to decrease: ";
        cin >> num;
        quantity -= num;
        cout << "Now stock is : " << quantity << endl
             << endl;
    }

    void displaydata()
    {
        cout << "id : " << itemid << endl;
        cout << "name : " << itemname << endl;
        cout << "price of item : " << price << endl;
        cout << "quantity of item :" << quantity << endl;
    }
} I[10];

int main()
{
    int choise, id, p, q;
    string n;
A:
    cout << "Enter 1 for add new item" << endl;
    cout << "Enter 2 for increase quantity" << endl;
    cout << "Enter 3 for decrease quantity" << endl;
    cout << "Enter 4 to display detail" << endl;
    cout << "Enter 0 to exit" << endl;
    cin >> choise;
    switch (choise)
    {
    case 1:
    {
        cout << "Enter item id : ";
        cin >> id;
        cout << "Enter item name : ";
        cin >> n;
        cout << "Enter price of item : ";
        cin >> p;
        cout << "Enter quantity of item : ";
        cin >> q;
        I[count] = store(id, n, p, q);
        count++;
        break;
    }

    case 2:
    {
        cout << "Enter item id : ";
        cin >> id;
        for (int i = 0; i <= count; i++)
        {
            int n;
            n = I[i].check(id);
            if (n == 0)
            {
                I[i].addstock();
                break;
            }
            if (i > count)
                cout << "not found";
        }
        break;
    }

    case 3:
    {
        cout << "Enter item id : ";
        cin >> id;
        for (int i = 0; i <= count; i++)
        {
            int n;
            n = I[i].check(id);
            if (n == 0)
            {
                I[i].decreasestock();
                break;
            }
            if (i > count)
                cout << "not found";
        }
        break;
    }

    case 4:
    {
        cout << "Enter item id : ";
        cin >> id;
        for (int i = 0; i <= count; i++)
        {
            int n;
            n = I[i].check(id);
            if (n == 0)
            {
                I[i].displaydata();
                break;
            }
            if (i > count)
                cout << "not found";
            break;
        }
    }

    case 0:
    {
        cout << "NAME : AKASH UNAGAR" << endl
             << "ID : 24CE130";
        return 0;
    }
    }
    goto A;
}