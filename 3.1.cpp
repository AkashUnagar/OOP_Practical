#include <iostream>
using namespace std;

class Employee
{
    string Name;
    double Basic_Salary;
    double Bonus; // default bonous = 1000 Rs.
public:
    Employee(string name, double salary, double bonous = 1000)
    {
        Name = name;
        Basic_Salary = salary;
        Bonus = bonous;
    }
    inline double Calculate_Total_Salary()
    {
        return Basic_Salary + Bonus;
    }
    void display()
    {
        cout << endl
             << "Name : " << Name;
        cout << endl
             << "Basic Salary : " << Basic_Salary;
        cout << endl
             << "Total Salary : " << Calculate_Total_Salary();
    }
};

int main()
{
    Employee *emp[20];
    string name;
    char bonusChoice;
    int count = 0, salary, bonus;
    char choice;

    do
    {
        cout << "Enter name for Employee " << count + 1 << ": ";
        cin >> name;
        cout << "Enter The Basic Salary: ";
        cin >> salary;
        cout << "Do you want to give Special bonus? (Y/N): ";
        cin >> bonusChoice;
        if (bonusChoice == 'Y' || bonusChoice == 'y')
        {
            cout << "Enter Bonus: ";
            cin >> bonus;
            emp[count] = new Employee(name, salary, bonus);
        }
        else
        {
            emp[count] = new Employee(name, salary);
        }
        count++;
        cout << "Do you want to add another Employee? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << endl
         << "EMPLOYEE DETAILS :" << endl;
    for (int i = 0; i < count; i++)
    {
        emp[i]->display();
    }

    for (int i = 0; i < count; i++)
    {
        delete emp[i];
    }

    cout << endl
         << "NAME : AKASH UNAGAR" << endl
         << "ID :24CE130";
    return 0;
}