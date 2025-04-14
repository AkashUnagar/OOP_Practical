#include <iostream>
#include <math.h>
using namespace std;

class Loan_Details
{
    int LoanID, Time;

    string Name;
    float Principle, IRate, EMI, Amount, Interest;

    void CalculateDetails()
    {
        float temp = (float)pow(1 + IRate, Time);

        EMI = Principle * IRate * temp / (temp - 1);
        Amount = EMI * Time;
        Interest = Amount - Principle;
    }

public:
    void AddData(string N = "Name", int ID = 0, float P = 0, float IR = 0, int T = 0)
    {
        Name = N;
        LoanID = ID;
        Principle = P;
        IRate = IR / 100;
        Time = T;

        CalculateDetails();
    }

    void LoanSummary()
    {
        cout << "Loan ID : " << LoanID << endl;
        cout << "Name : " << Name << endl;
        cout << "Principle : " << Principle << endl;
        cout << "Interest Rate (%) : " << IRate * 100 << endl;
        cout << "Time ( IN Months) : " << Time << endl;
        cout << "EMI : " << EMI << endl;
        cout << "Total Interest : " << Interest << endl;
        cout << "Total Amount to Pay : " << Amount << endl;
    }
};

int main()
{
    Loan_Details Loan[20];

    int LoanID, Time, choice = 0, Count = 0;
    string Name;
    float Principle, IRate;

    do
    {
        cout << endl
             << " WELCOME TO LOAN MANAGEMENT SYSTEM : " << endl
             << "Choices:";
        cout << "\n1. Add New Loan Details\n2. All Loans Details  Summary\n0. Exit System\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << endl
                 << "Enter details for Loan " << Count + 1;
            cout << endl
                 << "Loan ID : ";
            cin >> LoanID;
            cout << "Name : ";
            cin.ignore();
            getline(cin, Name);
            cout << "Principle : ";
            cin >> Principle;
            cout << "Interest Rate (%) : ";
            cin >> IRate;
            cout << "Time (Months) : ";
            cin >> Time;
            Loan[Count].AddData(Name, LoanID, Principle, IRate, Time);
            cout << "\nNew Loan Added!!";
            cout << "\n\nLoan Details are:";
            Loan[Count].LoanSummary();
            Count++;
        }
        else if (choice == 2)
        {
            if (Count < 1)
                cout << endl
                     << "NO Loans in System!";
            else
            {
                for (int i = 0; i < Count; i++)
                {
                    cout << endl
                         << "Loan " << i + 1 << " Details:";
                    Loan[i].LoanSummary();
                }
            }
        }
        else
            break;
    } while (choice == 1 || choice == 2);
    cout << "NAME : AKASH UNAGAR" << endl
         << "ID : 24CE130";

    return 0;
}