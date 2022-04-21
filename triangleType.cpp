#include <iostream>
#include <string>

// set global std
using namespace std;

int main()
{

    // engage user
    string findType = "Find a triangle's type. Please enter 'ok' or 'y' to continue ";
    string letsFind;
    cout << findType;
    cin >> letsFind;

    // is the user ready?
    if (letsFind == "ok" or letsFind == "y")
    {
    
    // grab triangle data
    float a, b, c;
    cout << "Please enter side A: ";
    cin >> a;
    cout << "Please enter side B: ";
    cin >> b;
    cout << "Please enter side C: ";
    cin >> c;

    // set some conditions
    if (a == b && b == c)
        cout << "The triangle type is Equilateral" << endl; // all sides equal

    else
    {

        if (a != b && a != c && b != c)
            cout << "The triangle type is Scalene" << endl; // all sides unequal
        else
            cout << "The triangle type is Isosceles" << endl; // two equal sides

        }

    }

    return 0;

}