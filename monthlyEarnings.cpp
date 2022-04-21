#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    char firstEntry[] = "What's your name? ";
    string secondEntry = "What's your annually income? (For example, 42315.33) ";
    char firstResponse [50];
    float secondResponse;

    cout << firstEntry;
    cin >> firstResponse;
    cout << secondEntry;
    cin >> secondResponse;

    string userName = firstResponse;
    userName[0] = toupper(userName[0]);
    double yearly = secondResponse;

    cout << "Hello, " << userName << endl;
    cout << "Your monthly income is " << (secondResponse / 12) << endl;
    cout << "Now in twenty years, your earnings will be roughly " << (yearly * 20) << endl; // not working 100% with some large amounts.

    return 0;

}