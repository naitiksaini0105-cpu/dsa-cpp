#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the first number :";
    cin >> a;
    cout << " enter the second number :";
    cin >> b;

    if (a > b)
    {
        cout << "a is greater than b." << endl;
    }
    else
    {
        cout << " b is greater than a." << endl;
    }
    return 0;
}