#include <iostream>
using namespace std;
class rectangle
{
private:
    float length, breadth;

public:
    void setdimension(float l, float b)
    {
        length = l;
        breadth = b;
    }
    float area(float length, float breadth)
    {
        return length * breadth;
    }
    float perimeter(float length, float breadth)
    {
        return 2 * (length + breadth);
    }
    void update(float l, float b)
    {
        length = l;
        breadth = b;
    }
};
int main()
{
    rectangle r[25];
    float l, b;
    int n, choice, h;
    cout << "Enter how many rectangle objects you want to create :" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Set dimension of rectangle : " <<  i + 1<<endl;
        cout << "Enter the length : ";
        cin >> l;
        cout << endl;
        cout << "Enter the breadth : ";
        cin >> b;
        cout << endl;
        r[i].setdimension(l, b);
        cout << "Area :" << r[i].area(l, b) << endl;
        cout << "Perimeter :" << r[i].perimeter(l, b) << endl;
    }
    cout << "Enter 1 to update the dimensions or 0 to exit : " << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout <<endl<<"Enter the no. of that rectangle whose dimensions you want to change : ";
        cin >> h;
        cout <<endl<<"Enter the new length : ";
        cin >> l;
        cout <<endl<<"Enter the new breadth : ";
        cin >> b;
        r[h - 1].update(l, b);
        cout <<endl<< "new Area :" << r[h - 1].area(l, b);
        cout <<endl<< " new Perimeter :" << r[h - 1].perimeter(l, b);
    }

    else
    {
        cout << " Thankyou Visit Again !" << endl;
    }
    cout << "NAME : AKASH UNAGAR" << endl
         << "ID : 24CE130 " << endl;

    return 0;
}