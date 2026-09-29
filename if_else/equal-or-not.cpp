#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the first number:" << endl;
    cin >> a;
    cout << "enter the second number:" << endl;
    cin >> b;

    if (a == b)
    {
        cout << "both numbers are equal." << endl;
    }
    else
    {
        cout << "both number are not equal." << endl;
    }
    return 0;
}